#include <cassert>


namespace mathUtils
{
    long long gcd(long long x, long long y)
    {
        long long temp;
        while (y != 0)
        {
            temp = y;
            y = x % y;
            x = temp;
        }
        return x;
    }

    long long powInt(long long x, int n)
    {
        assert(n >= 1);
        for(int i = 1; i < n; i++)
        {
            x *= x;
        }
        return x;
    }

    long long absVal(long long x)
    {
        if(x < 0) return (-1) * x;
        else return x;
    }
}