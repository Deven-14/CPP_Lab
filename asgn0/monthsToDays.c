#include <stdio.h>
int main()
{
    int ndays,m,d;
    printf("Enter the number of days:");
    scanf("%d",&ndays);
    m=(int)ndays/30;
    d=(int)(ndays-m*30);
    printf("The number of months=%d and days=%d\n",m,d);
    return 0;
}
