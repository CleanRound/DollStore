#include "doll.h"

void Doll::print_doll() const {
    cout << "Name: " << name << "\n";
    cout << "Price: " << price << "\n";
    cout << "Quantity: " << quantity << "\n";
}

void Doll::update_doll(const string& new_name, double new_price, int new_quantity) {
    name = new_name;
    price = new_price;
    quantity = new_quantity;
}

void create_doll(Doll& doll, const string& name, double price, int quantity) {
    doll.name = name;
    doll.price = price;
    doll.quantity = quantity;
}
