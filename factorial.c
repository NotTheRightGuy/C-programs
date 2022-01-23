#include <stdio.h>
int main()
{
    int a,f;
    printf("Enter a number");
    f=1;

    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        f*=i;
        
    }
    printf("%d", f);
    return 0;
}