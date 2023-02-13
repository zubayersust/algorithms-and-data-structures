#include<bits/stdc++.h>

using namespace std;

void factorize(int n)
{
    printf("Prime Factorization of %d: ", n);
    while(n % 2 == 0)
    {
        printf("%d ", 2);
        n /= 2;
    }

    for(int i = 3; i * i <= n; i += 2)
    {
        while(n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }

    if(n > 2)
        printf("%d", n);

    printf("\n");
}

int main()
{
    for(int i = 2; i <= 315; i++)
        factorize(i);

    return 0;
}
