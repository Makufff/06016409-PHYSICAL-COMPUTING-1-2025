#include <stdio.h>
#include <math.h>

int main()
{
    int num_days;
    char breed_names[3][50];
    
    scanf("%d", &num_days);
    scanf("%s %s %s", breed_names[0], breed_names[1], breed_names[2]);

    double daily_consumption[3];
    double total_consumption[3] = {0.0, 0.0, 0.0};

    for (int day = 0; day < num_days; day++)
    {
        scanf("%lf %lf %lf", &daily_consumption[0], &daily_consumption[1], &daily_consumption[2]);
        
        for (int breed = 0; breed < 3; breed++) total_consumption[breed] += daily_consumption[breed];
    }

    int refills_needed[3];
    for (int breed = 0; breed < 3; breed++)
    {
        double rate = (breed_names[breed][0] == 'N') ? 6.6 : 5.5;
        refills_needed[breed] = (int)ceil(total_consumption[breed] / rate);
    }

    printf("%s: %d refills\n", breed_names[0], refills_needed[0]);
    printf("%s: %d refills\n", breed_names[1], refills_needed[1]);
    printf("%s: %d refills\n", breed_names[2], refills_needed[2]);

    return 0;
}