#ifndef LAPTOP_H
#define LAPTOP_H

#pragma once

#include "product.h"

class Laptop : public Product {
public:
    Laptop(const std::string& type, const std::string& model, const std::string& manufacturer, double price, const std::string& processor);

    void display(std::ostream& os) const override;
    void displayConsole(std::ostream& os) const override;

private:
    std::string processor;
};



#endif // LAPTOP_H
