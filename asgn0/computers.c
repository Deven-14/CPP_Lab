#include <stdio.h>

int main()
{
    float cost[10],avgcost,sum=0,hcost=0,lcost=0,range;
    printf("Enter the different pc costs(In hundreds):");
    for(int i=0;i<10;++i)
    {
        scanf("%f",&cost[i]);
        sum+=cost[i];
    }
    avgcost=sum/10;
    hcost=lcost=cost[0];
    for(int i=1;i<10;++i)
    {
        if(cost[i]>hcost)
            hcost=cost[i];
        if(cost[i]<lcost)
            lcost=cost[i];
    }
    range=hcost-lcost;
    printf("The average cost(In hundreds) is %f and range is(In hundreds) %f",avgcost,range);
    return 0;
}
