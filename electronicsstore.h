#ifndef ELECTRONICSSTORE_H
#define ELECTRONICSSTORE_H

// ElectronicsStore.h
#pragma once

#include <vector>
#include "product.h"

class ElectronicsStore {
public:
    void addProduct(Product* product);
    void displayProducts() const;
    void saveProductsToFile(const std::string& filename) const;
    void loadProductsFromFile(const std::string& filename);
    void clearProducts();

private:
    std::vector<Product*> products;
};


#endif // ELECTRONICSSTORE_H
