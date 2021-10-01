#pragma once

#include <string>

using namespace std;

class Commodity {
public:
  Commodity(const string &name_, int id_, double price_);

  const string &get_name() const { return name; }
  int get_id() const { return id; }
  double get_price() const;
  double get_price(double quantity) const;
  void set_price(double new_price);
  double get_price_with_sales_tax() const;
  double get_price_with_sales_tax(double quantity) const;

private:
  string name;
  int id;
  double price;
};
