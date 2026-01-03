// Segmented Sieve

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> sieve(int num)
{
    vector<int> primecheck(num + 1, -1);
    vector<int> prime;
    primecheck[0] = 1;
    primecheck[1] = 1;

    for (int i = 2; i * i <= num; i++)
    {
        if (primecheck[i] == -1)
        {
            for (int j = i * i; j <= num; j += i)
            {
                primecheck[j] = 1;
            }
        }
    }

    for (int i = 0; i < primecheck.size(); i++)
    {
        if (primecheck[i] == -1)
        {
            prime.push_back(i);
        }
    }
    return prime;
}

int main()
{
    int left;
    int right;
    cin >> left;
    cin >> right;

    long long num = sqrt(right);
    vector<int> prime = sieve(num);

    vector<int> arr(right - left + 1, -1);
    for (int i = 0; i < prime.size(); i++)
    {
        int p = prime[i];
        long long start = max(1LL * p * p, ((left + p - 1) / p) * 1LL * p);
        for (int j = start; j <= right; j += p)
        {
            arr[j - left] = 0;
        }
    }
    if (left == 1)
        arr[0] = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == -1)
            cout << i + left << " ";
    }
    return 0;
}

// time complexity - O(sqrt(R) log log sqrt(R))
// space complexity -O(sqrt(R)+(R−L+1))
// The Segmented Sieve is an optimized technique to find all prime numbers in a given range (left,right)
