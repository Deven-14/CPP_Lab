#include <stdio.h>

struct product
{
    char code[5];
    int quantity;
    float rate;
    float value;
};
typedef struct product Product;

int main()
{
    Product p[4];
    float totvalue=0;
    for(int i=0;i<4;++i)
    {
        printf("Enter the product %d code, quantity and rate:",i+1);
        scanf("%s%d%f",p[i].code,&p[i].quantity,&p[i].rate);
        p[i].value=p[i].quantity*p[i].rate;
        totvalue+=p[i].value;
    }
	printf("Inventory report\n");
	printf("Code  Quantity Rate     Value\n");
	for(int i=0;i<4;++i)
		printf("%s  %d      %.2f  %.2f\n",p[i].code,p[i].quantity,p[i].rate,p[i].value);
    printf("The total value is %f\n",totvalue);
    return 0;
}
