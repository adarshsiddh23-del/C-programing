#include<stdio.h>
#include<math.h>
int main ()
{
    double a,b,c,D,R1,R2,real_part,imag_part;
    printf("enetr co-efficients ofa b and c");
    scanf("%f%f%f",&a,&b,&c);
    D=(b*b)-4.0*a*c;
    if(D>0){
        R1=-b+sqrt(D)/2*a;
        R2=+b+sqrt(D)/2*a;
        printf("root1=%2lf and root2=%2lf",R1,R2);
    }    
    else if(D==0){
        R1=R2=-b/(2*a);
        printf("root1=root2=%2lf",R1);
    }
    else{
        real_part=-b/(2*a);
        imag_part=sqrt(D)/(2*a);
        printf("root1=%2lf+%2lf ;and root2=%2lf-%2lf",real_part,imag_part,real_part,imag_part);
    }
    return 0;

}   