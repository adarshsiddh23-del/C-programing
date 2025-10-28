#include<stdio.h>
int main()
{
    float p, r,t, si;
    printf("Enter the value of p,r,t");
    scanf("%f%f%f", &p, &r, &t);
    si= (p*r*t)/100.0;
    printf("Simple intrest is %f", si);
    return 0;
}