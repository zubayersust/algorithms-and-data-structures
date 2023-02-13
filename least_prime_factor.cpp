#include<bits/stdc++.h>

using namespace std;

void leastPrimeFactor(int n)
{
    int primes[n + 1];
    memset(primes, 0, sizeof(primes));

    primes[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        if(primes[i] == 0)
        {
            primes[i] = i;
            for(int j = i * i; j <= n; j += i)
                if(primes[j] == 0)
                    primes[j] = i;
        }
    }

    for(int i = 1; i <= n; i++)
        printf("Least Prime Factor of %d = %d\n", i, primes[i]);
}

int main()
{
    int n = 6;
    leastPrimeFactor(n);

    return 0;
}
