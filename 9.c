#include <stdio.h>
int main() {
    int a,b,d;
    printf("Enter cost price: \n");
    scanf("%d",&a);
    printf("Enter selling price: \n");
    scanf("%d",&b);
    d=b-a;
    if(d>0) {
        printf("Profit is rupees %d\n",d);
    }
    else {
        printf("Loss is rupees %d\n",-d);
    }
    return 0;
}
