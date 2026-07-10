#include <stdio.h>
int main() {
    float a,c;
    printf("Enter number: \n");
    scanf("%f",&a);
    c=((a-32)*(5.0/9.0));
    printf("Given farenheit to celcius: %f\n",c);
    return 0;
}
