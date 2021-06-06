#include <stdio.h>

int main()
{
    int n,number,sum=0;
    float avg;
    printf("Enter the number of integers : ");
    scanf("%d",&n);
    printf("Enter the integers : ");
    for(int i=0;i<n;++i)
    {
        scanf("%d",&number);
        sum+=number;
    }
    avg=(float)sum/n;
    printf("The average is %f\n",avg);
    return 0;
}
