//1.Sprawdz czy liczba podana z klawiatury jest parzysta.
#include <iostream>

int main() {
  int a;
    std::cout << "Podaj liczbe: ";
    std::cin >> a;
    if (a % 2 == 0)
    {
    std::cout << a << " jest liczba parzysta.";
    }
    else
    {
    std::cout << a << " nie jest liczba parzysta.";
    }
}