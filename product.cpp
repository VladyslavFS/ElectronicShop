#include "product.h"

Product::Product(const std::string& type, const std::string& model, const std::string& manufacturer, double price)
    : type(type), model(model), manufacturer(manufacturer), price(price) {}

void Product::display(std::ostream& os) const {
    os << type << " " << model << " " << manufacturer << "  " << price << " ";
}

void Product::displayConsole(std::ostream& os) const {
    os << type << "// Model: " << model << " Manufacture: " << manufacturer << " Price: $" << price << " ";
}
