#ifndef DOLL_H
#define DOLL_H

#include <string>
#include <iostream>
using namespace std;

struct Doll {
    string name;
    double price;
    int quantity;

    void print_doll() const;
    void update_doll(const string& new_name, double new_price, int new_quantity);
};

void create_doll(Doll& doll, const string& name, double price, int quantity);

#endif

