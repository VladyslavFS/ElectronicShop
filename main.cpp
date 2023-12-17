// main.cpp
#include <iostream>
#include "smartphone.h"
#include "laptop.h"
#include "electronicsstore.h"

void printMenu() {
    std::cout << "\n=== Menu ===\n";
    std::cout << "1. Add Product\n";
    std::cout << "2. Display Products\n";
    std::cout << "3. Save Products to File\n";
    std::cout << "4. Load Products from File\n";
    std::cout << "5. Clear Products and File\n";
    std::cout << "6. Exit\n";
}

int main() {
    ElectronicsStore store;

    int choice;
    do {
        printMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::cout << "Enter product details:\n";
            std::cout << "1. Smartphone\n2. Laptop\n";
            int productType;
            std::cin >> productType;

            std::string type, model, manufacturer;
            double price;
            if (productType == 1) {
                std::string os;
                std::cout << "Enter model, manufacturer, price, and operating system: ";
                std::cin >> model >> manufacturer >> price >> os;
                store.addProduct(new Smartphone("Smartphone", model, manufacturer, price, os));
            }
            else if (productType == 2) {
                std::string processor;
                std::cout << "Enter model, manufacturer, price, and processor: ";
                std::cin >> model >> manufacturer >> price >> processor;
                store.addProduct(new Laptop("Laptop", model, manufacturer, price, processor));
            }
            else {
                std::cout << "Invalid choice.\n";
            }
            break;
        }
        case 2:
            std::cout << "Displaying products:\n";
            store.displayProducts();
            break;
        case 3:
            std::cout << "Saving products to file...\n";
            store.saveProductsToFile("products.txt");
            break;
        case 4:
            std::cout << "Loading products from file...\n";
            store.loadProductsFromFile("products.txt");
            break;
        case 5:
            std::cout << "Clearing products and file...\n";
            store.clearProducts();
            break;
        case 6:
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 6.\n";
            break;
        }
    } while (choice != 6);

    return 0;
}
