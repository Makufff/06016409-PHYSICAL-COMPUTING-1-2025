#include <stdio.h>

#define day_in_week 7
#define max_name_length 255

int main()
{
    char person1_name[max_name_length], person2_name[max_name_length];
    int person1_daily_data[day_in_week], person2_daily_data[day_in_week];
    
    scanf(" %[^\n]", person1_name);
    for (int day = 0; day < day_in_week; day++) scanf("%d", &person1_daily_data[day]);
    
    scanf(" %[^\n]", person2_name);
    for (int day = 0; day < day_in_week; day++) scanf("%d", &person2_daily_data[day]);

    int person1_total = 0, person2_total = 0;
    for (int day = 0; day < day_in_week; day++)
    {
        person1_total += person1_daily_data[day];
        person2_total += person2_daily_data[day];
    }

    int person1_wins = 0, person2_wins = 0, equal_days = 0;
    for (int day = 0; day < day_in_week; day++)
    {
        if (person1_daily_data[day] > person2_daily_data[day]) person1_wins++;
        else if (person1_daily_data[day] < person2_daily_data[day]) person2_wins++;
        else equal_days++;
    }

    printf("%s: %d minutes, average %d minutes/day\n", person1_name, person1_total, person1_total / day_in_week);
    printf("%s: %d minutes, average %d minutes/day\n", person2_name, person2_total, person2_total / day_in_week);
    printf("Faster days - %s: %d, %s: %d, Equal: %d", person1_name, person2_wins, person2_name, person1_wins, equal_days);

    return 0;
}
