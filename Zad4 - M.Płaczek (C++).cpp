//4.Napisz program obliczajacy sume liczb od 1 do zadanej.
    #include <iostream>

    int main() {
        int a, sum = 0;
        std::cout << "Podaj liczbe: ";
        std::cin >> a;

        for (int i = 1; i <= a; i++) 
        {
            sum += i;
        }

        {std::cout << "Suma liczb od 1 do " << a << " wynosi: " << sum <<
         std::endl;
        }
    }