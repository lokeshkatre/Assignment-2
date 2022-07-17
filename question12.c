#include<stdio.h>
int main()
{
    float USD,INR;
    printf("Enter amount in INR: Rs ");
    scanf("%f",&INR);
    USD=INR/76.23;
    printf("Amount in USD : $%f",USD);
    return 0;
}