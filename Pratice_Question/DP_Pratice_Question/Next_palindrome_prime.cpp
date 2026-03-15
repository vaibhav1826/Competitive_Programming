class Solution
{
public:
    bool isPrime(int n)
    {
        if (n < 2)
            return false;
        if (n % 2 == 0)
            return n == 2;
        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int PrimePalindrome(int N)
    {

        if (N <= 11)
        {
            if (N <= 2)
                return 2;
            if (N <= 3)
                return 3;
            if (N <= 5)
                return 5;
            if (N <= 7)
                return 7;
            return 11;
        }

        for (int i = 1; i <= 100000; i++)
        {

            int x = i;
            int pal = i;
            x /= 10;

            while (x > 0)
            {
                pal = pal * 10 + (x % 10);
                x /= 10;
            }

            if (pal >= N && isPrime(pal))
                return pal;
        }

        return -1;
    }
};
