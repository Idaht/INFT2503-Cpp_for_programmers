#include <iostream>

using namespace std;

int main() {
  int a = 5;   //Ok
  int &b = a;  //En referanse MÅ ha en variabel som den referer til når den erklæres
  int *c = &b; //Fyfy, bare "int *c;" setter kun av plass til pekeren, som kan være hvor som helst i minnet, setter heller til &b
  c = &b;      //Ok
  a = b + *c;  //Hverken *a eller *b er initiert, så må fjerne pointer --> a = b (5) + *c (5)
  b = 2;       //Kan ikke reassigne en referanse etter at den er satt, enten kommenter ut eller fjern &
}
