#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. elements in array: ");
    scanf("%d",&n);
    int i,num[n];
    for(i=0;i<n;i++) {
         printf("Enter the elements one-by-one: ");
        scanf("%d",&num[i]) ;
    }
    int j = 0;
    int max = 0;
    for(i = 0; i < n; i++) 
    {
        if(num[i] % 2 == 0) 
        {
            j++;
            if(j > max) 
            {
                max = j;
            }
        } else 
        {
            j = 0;
        }
    }
    printf("Max continuous even numbers: %d\n", max);
    return 0;
}
