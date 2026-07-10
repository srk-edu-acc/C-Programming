#include <stdio.h>
int main() {
    float a,b,c,d,e;
    printf("Enter mark 1: \n");
    scanf("%f",&a);
    printf("Enter mark 2: \n");
    scanf("%f",&b);
    printf("Enter mark 3: \n");
    scanf("%f",&c);
    printf("Enter mark 4: \n");
    scanf("%f",&d);
    printf("Enter mark 5: \n");
    scanf("%f",&e);
    printf("Total marks: %f\n",(a+b+c+d+e));
    printf("Percentage of marks: %f\n",((a+b+c+d+e)/5));
    return 0;
}
