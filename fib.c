#include<stdio.h>
void fibonocci(int);
void main()
{
  int num;
  printf("Enter the number of elements :");
  scanf("%d",&num);
  fibonocci(num);
}
void fibonocci(int num)
{
int n1=0,n2=1,n3,i;
for(i=2;i<num;i++)
{
  n3=n1+n2;
  printf("%d\t",n3);
  n1=n2;
  n2=n3;
}
}    
