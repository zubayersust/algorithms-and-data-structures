#include<bits/stdc++.h>

using namespace std;

#define MAX_N 315

int primes[MAX_N + 1];

void sieve()
{
    memset(primes, 0, sizeof(primes));

    primes[1] = 1;
    for(int i = 2; i <= MAX_N; i++)
        if(primes[i] == 0)
        {
            primes[i] = i;
            for(int j = i * i; j <= MAX_N; j += i)
                if(primes[j] == 0)
                    primes[j] = i;
        }
}

void primeFactorize(int n)
{
    printf("Prime Factorization of %d: ", n);
    while(n != 1)
    {
        printf("%d ", primes[n]);
        n /= primes[n];
    }

    printf("\n");
}

int main()
{
    sieve();
    for(int i = 2; i <= MAX_N; i++)
        primeFactorize(i);

    return 0;
}
