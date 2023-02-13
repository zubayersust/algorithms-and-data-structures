#include<bits/stdc++.h>

using namespace std;

//int nCk(int n, int k)
//{
//    int res = 1;
//    for(int i = n - k + 1; i <= n; i++)
//        res *= i;
//    for(int i = 2; i <= k; i++)
//        res /= i;
//
//    return res;
//}

int nCk(int n, int k)
{
    double res = 1;
    for(int i = 1; i <= k; i++)
        res = res * (n - k + i) / i;

    return (int) (res + 0.01);
}

int main()
{
    int n = 152;
    int k = 5;

    int result = nCk(n, k);
    cout << result << endl;

    return 0;
}
