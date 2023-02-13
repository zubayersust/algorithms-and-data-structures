#include<bits/stdc++.h>

using namespace std;

int gcd_euclid(int a, int b)
{
    if(b == 0)
        return a;

    return gcd_euclid(b, a % b);
}

int main()
{
    int arr[] = {4, 4, 12, 8, 24};

    int result = arr[0];
    for(int i = 1; i < 5; i++)
    {
        result = gcd_euclid(arr[i], result);
        if(result == 1)
            return 1;
    }

    printf("GCD of the Array = %d\n", result);

    return 0;
}
