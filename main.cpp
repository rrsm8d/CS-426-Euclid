#include <iostream>

using namespace std;

int gcd(int a, int b, int &x, int &y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int temp = gcd(b % a, a, x1, y1);

    x = y1 - (b / a) * x1;
    y = x1;

    return temp;
}

int modInverse(int a, int m) {
    int x, y;
    int g = gcd(a, m, x, y);
    if (g != 1) return -1; // Inverse doesn't exist

    return (x % m + m) % m;
}

int main()
{
    int x, y;
    std::cout << gcd(10012012, 2314213, x, y) << std::endl;
    std::cout << gcd(28176412, 29108188, x, y) << std::endl;
    std::cout << gcd(38172,  23812188, x, y) << std::endl;
    std::cout << modInverse(12091, 24123123) << std::endl;
    std::cout << modInverse(28173928, 129182771) << std::endl;
    return 0;
}
