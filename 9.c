#include<stdio.h>
int check(int, int);
int main()
{
    int n,d;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter a digit for check: ");
    scanf("%d",&d);
    if(check(n,d))
        printf("Digit found");
    else
        printf("Digit not found");
        return 0;
}
int check(int n, int d)
{
    while(n)
    {
        if(n%10==d)
            return 1;
        n=n/10;

    }
    return 0;
}
