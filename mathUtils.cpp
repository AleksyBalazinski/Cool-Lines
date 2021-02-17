#include <cassert>


namespace mathUtils
{
    int gcd(int x, int y)
    {
        int temp;
        while (y != 0)
        {
            temp = y;
            y = x % y;
            x = temp;
        }
        return x;
    }
    int powInt(int x, int n)
    {
        assert(n >= 1);
        for(int i = 1; i < n; i++)
        {
            x *= x;
        }
        return x;
    }
}