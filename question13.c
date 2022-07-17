#include<stdio.h>
int main()
{
    int num,r;
    printf("Enter the three digit number:");
    scanf("%d",&num);
    r=num%10;
    num=num/10;
    num=num+100*r;
    printf("\nAfter rotating in right :%d",num);
    return 0;
}