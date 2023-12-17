#ifndef PRODUCT_H
#define PRODUCT_H

#pragma once

#include <iostream>

class Product {
public:
    Product(const std::string& type, const std::string& model, const std::string& manufacturer, double price);

    virtual void display(std::ostream& os) const;
    virtual void displayConsole(std::ostream& os) const;

private:
    std::string type;
    std::string model;
    std::string manufacturer;
    double price;
};


#endif // PRODUCT_H
