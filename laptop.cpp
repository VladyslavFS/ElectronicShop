#include "laptop.h"

Laptop::Laptop(const std::string& type, const std::string& model, const std::string& manufacturer, double price, const std::string& processor)
    : Product("Laptop", model, manufacturer, price), processor(processor) {}

void Laptop::display(std::ostream& os) const {
    Product::display(os);
    os << processor << "\n";
}

void Laptop::displayConsole(std::ostream& os) const {
    Product::displayConsole(os);
    os << "Processor: " << processor << "\n";
}
