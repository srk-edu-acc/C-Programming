#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: \n");
    scanf("%d",&a);
    printf("Entered kilometer to metre: %d",(a*1000));
    printf("Entered kilometer to centimetre: %d",(a*10));
    return 0;
}
