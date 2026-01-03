// O(sqrt(n)) Algorithm for Primality Testing

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
};

int main()
{

    int num;
    cin >> num;

    if (isPrime(num))
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not a Prime Number" << endl;
    }
}

// Time: O(√n)
// Space: O(1)
