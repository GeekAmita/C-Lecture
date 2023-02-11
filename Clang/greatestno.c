/*To find the greatest of three numbers*/

#include<stdio.h>

int main()
{
    int N1, N2, N3;

    printf("\nEnter Three Numbers: \n");
    scanf("%d %d %d",&N1,&N2,&N3);

    if(N1 > N2 && N1 > N3)
    { 
        printf("\n%d is greatest.\n",N1);
    }
    else if(N2 > N1 && N2 > N3)
    {
        printf("\n%d is greatest.\n",N2);
    }
    else
    {
        printf("\n%d is greatest.\n",N3);
    }
return 0;
}