#include <stdio.h>

int main()
{
    float Tf,Tc;
    printf("Enter the Temperature in fahrenheit : ");
    scanf("%f",&Tf);
    Tc=(Tf-32)/1.8;
    printf("The Temperatuer in celsius is %f\n",Tc);
    return 0;
}
