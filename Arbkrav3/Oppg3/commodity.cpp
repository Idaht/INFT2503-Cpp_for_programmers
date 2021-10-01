#include "commodity.hpp"
#include <iostream>
#include <string>

using namespace std;

const double tax = 1.25;

Commodity::Commodity(const string &name_, int id_, double price_) : name(name_), id(id_), price(price_){};

double Commodity::get_price() const {
  return price;
}

double Commodity::get_price(double quantity) const {
  return get_price() * quantity;
}

double Commodity::get_price_with_sales_tax() const {
  return get_price() * tax;
}

double Commodity::get_price_with_sales_tax(double quantity) const {
  return get_price(quantity) * tax;
}

void Commodity::set_price(double new_price) {
  price = new_price;
}
