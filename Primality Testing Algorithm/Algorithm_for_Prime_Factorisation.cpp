// Prime Factorization using Trial Division

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<int> PrimeFactors;

    for (int i = 2; i * i <= num; i++)
    {
        while (num % i == 0)
        {
            PrimeFactors.push_back(i);
            num = num / i;
        }
    }
    if (num > 1)
    {
        PrimeFactors.push_back(num);
    }

    for (int i = 0; i < PrimeFactors.size(); i++)
    {
        cout << PrimeFactors[i] << " ";
    }
}

// Time: O(√n)
// Space: O(log n)