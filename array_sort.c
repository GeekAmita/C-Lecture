/*To sort elements if integer array*/
#include <stdio.h>  

#define MAX_SIZE 100  

int main()  
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
    
   // int arr[] = {5, 2, 8, 7, 1};   
    int temp = 0;  

    //int length = sizeof(arr)/sizeof(arr[0]);  
        
    printf("Elements of original array: \n");  
    for (int i = 0; i < n; i++) {   
        printf("%d ", arr[i]);   
    }    
      
    for (int i = 0; i < n; i++) {   
        for (int j = i+1; j < n; j++) {   
           if(arr[i] > arr[j]) {  
               temp = arr[i];  
               arr[i] = arr[j];  
               arr[j] = temp;  
           }   
        }   
    }  
      
    printf("\n");  
      
    printf("Elements of array sorted in ascending order: \n");  
    for (int i = 0; i < n; i++) {   
        printf("%d -> ", arr[i]);  
    }  

    printf("\n");

    return 0;  
}