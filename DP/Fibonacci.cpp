#include<bits/stdc++.h>

using namespace std;

int memo[2];

//int fibonacci(int n)
//{
//    if(n == 0) return 0;
//    if(n == 1) return 1;
//
//    if(memo[n] != -1)
//        return memo[n];
//
//    return memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
//}

int fibonacci(int n)
{
    memo[0] = 0;
    memo[1] = 1;

    for(int i = 2; i <= n; i++)
        memo[i % 2] = memo[(i - 2) % 2] + memo[(i - 1) % 2];

    return memo[n % 2];
}

int main()
{
    memset(memo, -1, sizeof(memo));
    printf("%d\n", fibonacci(3));

    memset(memo, -1, sizeof(memo));
    printf("%d\n", fibonacci(5));

    memset(memo, -1, sizeof(memo));
    printf("%d\n", fibonacci(7));

    return 0;
}
