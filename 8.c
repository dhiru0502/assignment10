#include<stdio.h>
int fact(int);
float perm(int , int );
int main()
{
    int n,r;
    printf("Enter value of n and r: ");
    scanf("%d %d",&n,&r);
    printf("permutation is %.2f: ",perm(n,r));
    return 0;
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
        f=f*i;
    return f;
}
float perm(int n, int r)
{
    float a;
    a=fact(n)/fact(n-r);
    return a;
}
