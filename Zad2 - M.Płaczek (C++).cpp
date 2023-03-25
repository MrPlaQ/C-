//2.Sprawdz warunek trojkata dla podanych trzech bokow.
// Wersja bez CINa
#include <iostream>

int main() {
int a=2,b=3,c=4;
if (a>0 && b>0 && c>0)
{if((a+b)>c && (a+c)>b && (b+c)>a)
{std::cout<<"bedzie\n";}
else
{std::cout<<"nie bedzie\n";}
}
}

// wersja z CINem
#include <iostream>

int main() {
int a,b,c;
    std::cout << "Podaj liczbe: ";
    std::cin >> a;
    std::cout << "Podaj liczbe: ";
    std::cin >> b;
    std::cout << "Podaj liczbe: ";
    std::cin >> c;

if (a>0 && b>0 && c>0)
{if((a+b)>c && (a+c)>b && (b+c)>a)
{std::cout<<"bedzie\n";}
else
{std::cout<<"nie bedzie\n";}
}
}