#include<bits/stdc++.h>

using namespace std;

int extendedEuclid(int a, int b, int *x, int *y)
{
    if(b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }

    int x1, y1;
    int gcd = extendedEuclid(b, a % b, &x1, &y1);

    *x = y1;
    *y = x1 - (a / b) * y1;

    return gcd;
}

int main()
{
    int a = 99;
    int b = 78;

    int x, y;
    int gcd = extendedEuclid(a, b, &x, &y);

    printf("%d %d %d\n", gcd, x, y);

    return 0;
}
