#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#pragma once

#include "product.h"

class Smartphone : public Product {
public:
    Smartphone(const std::string& type, const std::string& model, const std::string& manufacturer, double price, const std::string& os);

    void display(std::ostream& os) const override;
    void displayConsole(std::ostream& os) const override;

private:
    std::string operatingSystem;
};


#endif // SMARTPHONE_H
