#include <stdio.h>

int main()
{
    printf("Enter the height of the pattern: ");
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < ((n*n)-1); j++ )
        {
            j >= (n-i) && j <= (n+i) ? printf("*") : printf(" ");
        }
        printf("\n");
    }

    return 0;
}