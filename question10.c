#include<stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    num=(num/10)*10;
    printf("now number is %d",num);
    return 0;
}