//3.Sprawdz czy jedna liczba dzieli druga bez reszty.
#include <iostream>

int main() {
int a,b;
    std::cout << "Podaj liczbe: ";
    std::cin >> a;
    std::cout << "Podaj liczbe: ";
    std::cin >> b;

  if (a % b == 0)
    {
    std::cout << a << " dzieli " << b << " bez reszty.";
    }
    else
    {
    std::cout << a << " nie dzieli " << b << " bez reszty.";
    }
}