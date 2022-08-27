#include<stdio.h>
even(int );
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(even(x))
        printf("Number is even");
    else
        printf("Number is odd");
    return 0;
}
int even(int a)
{
    if(a%2==0)
        return 1;
    else
        return 0;
}
