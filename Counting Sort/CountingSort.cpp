/**
Algorithm    : Counting Sort
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int * CountingSort(int *ap, int length)
{
    int i, j, k=0, nMax=0;
    for(i=0; i<length; i++)
        nMax = max(nMax, *(ap + i));

    int aux[nMax+1] = {0};
    for(i=0; i<length; i++)
        aux[*(ap + i)]++;

    for(i=0; i<nMax+1; i++)
        if(aux[i] > 0)
            for(int j=0; j<aux[i]; j++)
                ap[k++] = i;

    return ap;
}

int main()
{
    int i;
    static int numbers[10];

    // Generates 10 Random Numbers In Range 0 - 99
    for(i=0; i<10; i++)
        numbers[i] = rand() % 100;

    printf("Normal Array:");
    for(i=0; i<10; i++)
        printf(" %d", numbers[i]);

    printf("\n");

    int *result = CountingSort(numbers, 10);

    printf("Sorted Array:");
    for(i=0; i<10; i++)
        printf(" %d", *(result + i));

    printf("\n");

    return 0;
}
