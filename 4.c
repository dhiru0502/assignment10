#include<stdio.h>
void natural(int);
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    natural(N);
    return 0;
}
void natural(int x)
{
    int i;
    for(i=1; i<=x; i++)
        printf("%d ",i);
}
