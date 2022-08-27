#include<stdio.h>
float simple(int, int, int);
int main()
{
    int a,b,c;
    printf("Enter the pricipal amount, rate and time: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Simple interest is %.2f",simple(a,b,c));
    return 0;
}
float simple(int p, int r, int t)
{
    float si;
    si=(p*r*t)/100;
    return si;
}
