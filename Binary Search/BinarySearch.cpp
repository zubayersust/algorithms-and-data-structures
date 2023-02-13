/**
Algorithm    : Binary Search
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int LowerBound(int *array_pointer, int length, int n)
{
    printf("Sorted Array: ");
    for(int i = 0; i < length; i++)
        printf("%d ", *(array_pointer + i));

    printf("\n");

    int start = 0;
    int last = length - 1;
    int index = -1;

    while(start <= last)
    {
        int mid = (start + last) / 2;
        if(n == *(array_pointer + mid) || n < * (array_pointer + mid))
        {
            index = mid;
            last = mid - 1;
        }
        else if(n > *(array_pointer + mid))
            start = mid + 1;
        else last = mid - 1;
    }

    return start;
}

int UpperBound(int *array_pointer, int length, int n)
{
    printf("Sorted Array: ");
    for(int i = 0; i < length; i++)
        printf("%d ", *(array_pointer + i));

    printf("\n");

    int start = 0;
    int last = length - 1;
    int index = length;

    while(start <= last)
    {
        int mid = start + (last - start) / 2;
        if(n < * (array_pointer + mid))
        {
            index = mid;
            last = mid - 1;
        }
        else start = mid + 1;
    }

    return index;
}

int BinarySearch(int *array_pointer, int length, int n)
{
    printf("Sorted Array: ");
    for(int i = 0; i < length; i++)
        printf("%d ", *(array_pointer + i));

    printf("\n");

    int start = 0;
    int last = length - 1;
    int index = -1;

    while(start <= last)
    {
        int mid = start + (last - start) / 2;
        if(n == *(array_pointer + mid))
            return mid;
        else if(n > *(array_pointer + mid))
            start = mid + 1;
        else last = mid - 1;
    }

    return index;
}

int main()
{
    int numbers[] = {10, 30, 5, 20, 20, 30, 5, 40, 100};
    int length = sizeof(numbers) / sizeof(int);

    int a = 20;
    int b = 40;
    int c = 60;

    int result;

    //Sorted in Descending Order
    //sort(numbers, numbers+length, greater<int>());

    //Sorted in Ascending Order
    sort(numbers, numbers + length);

    result = BinarySearch(numbers, length, a);
    if(result == -1)
        printf("Number %d: Not Found\n\n", a);
    else printf("Number %d: Found, Index = %d\n\n", a, result);

    result = BinarySearch(numbers, length, b);
    if(result == -1)
        printf("Number %d: Not Found\n\n", b);
    else printf("Number %d: Found, Index = %d\n\n", b, result);

    result = BinarySearch(numbers, length, c);
    if(result == -1)
        printf("Number %d: Not Found\n\n", c);
    else printf("Number %d: Found, Index = %d\n\n", c, result);

    int d = 8;
    int f = 20;
    int k = 5;

    printf("**********Find Lower Bound**********\n\n");

    result = LowerBound(numbers, length, d);
    printf("Lower Bound Index For %d: %d\n\n", d, result);

    result = LowerBound(numbers, length, f);
    printf("Lower Bound Index For %d: %d\n\n", f, result);

    result = LowerBound(numbers, length, k);
    printf("Lower Bound Index For %d: %d\n\n", k, result);

    printf("**********Find Upper Bound**********\n\n");

    result = UpperBound(numbers, length, d);
    printf("Upper Bound Index For %d: %d\n\n", d, result);

    result = UpperBound(numbers, length, f);
    printf("Upper Bound Index For %d: %d\n\n", f, result);

    result = UpperBound(numbers, length, k);
    printf("Upper Bound Index For %d: %d\n\n", k, result);

    return 0;
}
