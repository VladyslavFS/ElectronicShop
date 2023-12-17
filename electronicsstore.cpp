// ElectronicsStore.cpp
#include "electronicsstore.h"
#include "laptop.h"
#include "smartphone.h"
#include <iostream>
#include <fstream>

void ElectronicsStore::addProduct(Product* product) {
    products.push_back(product);
}

void ElectronicsStore::displayProducts() const {
    for (const auto& product : products) {
        product->displayConsole(std::cout);
    }
}

void ElectronicsStore::saveProductsToFile(const std::string& filename) const {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto& product : products) {
            product->display(outFile);
        }
        outFile.close();
    }
    else {
        std::cerr << "Unable to open the file.\n";
    }
}

void ElectronicsStore::loadProductsFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        std::cerr << "Unable to open the file for loading.\n";
        return;
    }

    std::string line;
    std::string model, manufacturer, attribute, type;
    double price;

    while (inFile >> type >> model >> manufacturer >> price >> attribute) {
        if (type == "Laptop") {
            addProduct(new Laptop(type, model, manufacturer, price, attribute));
        }
        else {
            addProduct(new Smartphone(type, model, manufacturer, price, attribute));
        }
    }

    inFile.close();
    std::cout << "Products successfully loaded from file.\n";
}

void ElectronicsStore::clearProducts() {
    int switcher;
    std::cout << "1. Clear all products\n2. Clear current products\n";
    std::cin >> switcher;
    if (switcher == 1) {
        std::ofstream clearFile("products.txt", std::ios::trunc);
        products.clear();
        clearFile.close();
    }
    else if (switcher == 2) {
        products.clear();
    }
    else {
        return;
    }
}
