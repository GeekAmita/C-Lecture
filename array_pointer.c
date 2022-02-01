/*To access array element using pointer*/
#include<stdio.h>
#define MAX_SIZE 100  

void main()
{
    int arr[MAX_SIZE];
    int i, n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("\nEnter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
   
    int *ptr = arr; 
    printf("\nArray you entered: \n");  
    for(int i=0; i<n; i++)        
    printf("%d ",*(ptr+i));   
    printf("\n");  
}