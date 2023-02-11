/*To print employee details of employees using structure*/
#include <stdio.h>

struct employee
{
 int id;
 char name[100];
 char title[100];
 char city[100];
 int salary;
};

int main(void) {
 struct employee emp[100];
 int n,i,key;
 printf("Enter the number of employees:\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter the details of employee %d:\n",i+1);
  printf("Employee ID:\n");
  scanf("%d",&emp[i].id);
  printf("Employee name:\n");
  scanf("%s",emp[i].name);
  printf("Employee title:\n");
  scanf("%s",emp[i].title);
  printf("Employee city:\n");
  scanf("%s",emp[i].city);
  printf("Employee Salary:\n");
  scanf("%d",&emp[i].salary);
  printf("\n");
 }
 printf("Enter the id of employee to print the details:\n");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
  if(emp[i].id==key)
  {
   printf("Details of employee %d is :\n",emp[i].id);
   printf("Name=%s\n",emp[i].name);
   printf("Title=%s\n",emp[i].title);
   printf("City=%s\n",emp[i].city);
   printf("Salary=%d\n",emp[i].salary);
   break;
  }
 }
 return 0;
}
