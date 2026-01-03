#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long num;
    cin >> num;

    // Handle even numbers first
    if (num % 2 == 0)
    {
        cout << 2 << " " << num / 2;
        return 0;
    }

    // Fermat method for odd numbers
    long long a = ceil(sqrt(num));
    long long b2 = a * a - num;

    while (true)
    {
        long long b = sqrt(b2);
        if (b * b == b2)
        { // b^2 is a perfect square
            cout << a - b << " " << a + b;
            break;
        }
        a++;
        b2 = a * a - num;
    }

    return 0;
}
