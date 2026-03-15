#include<stdio.h>
int main() 
{
  int n,sum=0,d,temp;
  printf("Enter n value:");
  scanf("%d",&n);
  temp=n;
  while(n!=0) 
  {
    d=n%10;
    sum=sum*10+d;
    n=n/10;
  }
  printf("Reverse of %d is %d",temp,sum);
  return 0;
}