#include<stdio.h>
int main()
{
    int num,sum=0,r;
    printf("Enter three digit number:");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        num=num/10;
        sum=sum+r;
    }
    printf("The sum of digits of number is %d",sum);
    return 0;
}