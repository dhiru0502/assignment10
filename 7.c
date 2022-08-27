#include<stdio.h>
int fact(int);
float comb(int , int );
int main()
{
    int n,r;
    printf("Enter value of n and r: ");
    scanf("%d %d",&n,&r);
    printf("Combination is %f: ",comb(n,r));
    return 0;
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
        f=f*i;
    return f;
}
float comb(int n, int r)
{
    float c;
    c=fact(n)/(fact(r)*fact(n-r));
    return c;
}
