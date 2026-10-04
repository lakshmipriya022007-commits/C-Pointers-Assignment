#include <stdio.h>

int main()
{
    int a[100], n, i;
    int *p;
    int max, min;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;
    max = min = *p;

    for(i = 1; i < n; i++)
    {
        p++;

        if(*p > max)
            max = *p;

        if(*p < min)
            min = *p;
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
