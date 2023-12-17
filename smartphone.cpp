#include "smartphone.h"

Smartphone::Smartphone(const std::string& type, const std::string& model, const std::string& manufacturer, double price, const std::string& os)
    : Product(type, model, manufacturer, price), operatingSystem(os) {}

void Smartphone::display(std::ostream& os) const {
    Product::display(os);
    os << operatingSystem << "\n";
}

void Smartphone::displayConsole(std::ostream& os) const {
    Product::displayConsole(os);
    os << "Operating system: " << operatingSystem << "\n";
}
