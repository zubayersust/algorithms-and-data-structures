#include<bits/stdc++.h>

using namespace std;

int gcd(int x, int y)
{
    return y ? gcd(y, x % y) : x;
}

int lcm(int x, int y)
{
    return x / gcd(x, y) * y;
}

int main()
{
    int x = 30;
    int y = 20;

    int k = gcd(x, y);
    printf("GCD(%d,%d) = %d\n", x, y, k);
    k = lcm(x, y);
    printf("LCM(%d,%d) = %d\n", x, y, k);

    x = 21;
    y = 13;

    k = gcd(x, y);
    printf("GCD(%d,%d) = %d\n", x, y, k);
    k = lcm(x, y);
    printf("LCM(%d,%d) = %d\n", x, y, k);

    x = 24;
    y = 36;

    k = gcd(x, y);
    printf("GCD(%d,%d) = %d\n", x, y, k);
    k = lcm(x, y);
    printf("LCM(%d,%d) = %d\n", x, y, k);

    return 0;
}
