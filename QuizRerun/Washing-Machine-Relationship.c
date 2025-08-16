#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    double init_price = 2800.0;
    double sum = 0;

    for (int i = 1; i <= n/2; i++)
    {
        sum += init_price * 2.0 / 100.0;
        init_price -= init_price * 2.0 / 100.0;
    }

    printf("%.2lf\n", sum);
    if(2800.0*70.0/100.0 <= init_price)printf("Safe");
    else printf("Danger");

    return 0;
}