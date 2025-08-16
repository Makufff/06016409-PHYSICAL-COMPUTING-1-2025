#include <stdio.h>

int main()
{
    double fuel_price; scanf(" %lf", &fuel_price);
    int is_expressway[4];
    double performance_scores[4];

    for (int day = 0; day < 4; day++) scanf(" %d", &is_expressway[day]);
    for (int day = 0; day < 4; day++) scanf(" %lf", &performance_scores[day]);

    double expressway_total_cost = 0.0, romklao_total_cost = 0.0;
    int expressway_days = 0, romklao_days = 0;
    
    for (int day = 0; day < 4; day++){
        double fuel_consumption, daily_cost;

        if (is_expressway[day]){
            fuel_consumption = 29.0 / performance_scores[day];
            daily_cost = (fuel_consumption * fuel_price) + 60.0;
            expressway_total_cost += daily_cost;
            expressway_days++;
        }
        else{
            fuel_consumption = 25.0 / performance_scores[day];
            daily_cost = fuel_consumption * fuel_price;
            romklao_total_cost += daily_cost;
            romklao_days++;
        }

        printf("Day %d: fuel %.2f L, cost %.2f Baht\n", day + 1, fuel_consumption, daily_cost);
    }

    printf("Expressway: %.2f Baht\n", expressway_days ? expressway_total_cost / expressway_days : 0);
    printf("Romklao: %.2f Baht", romklao_days ? romklao_total_cost / romklao_days : 0);

    return 0;
}