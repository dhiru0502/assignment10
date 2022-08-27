#include<stdio.h>
float area(float);
int main()
{
    float x;
    printf("Enter the radius of circle: ");
    scanf("%f",&x);
    printf("\n Area of circle is %.2f",area(x));
    return 0;
}
float area(float r)
    {
        float A;
        A=3.14*r*r;
        return A;
    }
