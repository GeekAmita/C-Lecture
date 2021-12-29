#include <stdio.h>
#define MAX_SIZE 100  

int main()
{
    int arr[MAX_SIZE];
    int i, max, min, n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=1; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}