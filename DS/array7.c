#include<stdio.h>
#define SIZE_MAX 100

int main()
{
    int arr[SIZE_MAX], sum[SIZE_MAX];
    int i, n, j, k, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            k=arr[i]+arr[j];
            sum[i]=k;
        }
    }
}