#include <stdio.h>  
int main()
{
    int n, m = 1, l;
    scanf_s("%d", &n);
    for (int i = n; i > 1; i--)
    {
        for (int j = 1; j < m; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        m++;

        printf("\n");
    }
    l = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= l - 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        l--;

        printf("\n");
    }
    return 0;
}