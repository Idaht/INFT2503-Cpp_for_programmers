const double pi = 3.141592;

class Circle {
public:
  Circle(double radius_); //Capital letter in "circle" (same as class name)
  int get_area() const;
  double get_circumference() const;

private: //Add ":" and jump down a line with the parameter
  double radius;
}; //Add ";"

// ==> Implementasjon av klassen Circle

Circle::Circle(double radius_) : radius(radius_) { //Remove "public" and switch "radius_" with "radius"
}

int Circle::get_area() const { //Add "const" at end
  return pi * radius * radius;
}

double Circle::get_circumference() const {  //Add return type
  double circumference = 2.0 * pi * radius; //Add type to make it a declaration
  return circumference;
}
