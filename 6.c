#include <stdio.h>
int main() {
    int a,b,s;
    printf("Enter number 1: \n");
    scanf("%d",&a);
    printf("Enter number 2: \n");
    scanf("%d",&b);
    printf("Variables before swapping: a=%d and b=%d\n",a,b);
    s=a+b;
    a=s-a;
    b=s-b;
    printf("Variables after swapping: a=%d and b=%d\n",a,b);
    return 0;
}
