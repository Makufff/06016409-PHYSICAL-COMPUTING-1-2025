#include <stdio.h>

int main() {
    float height, weight, total_height = 0, total_weight = 0;
    int age, total_age = 0;
    int count_age20_height160 = 0, count_ageBelow20_height180_or_weight60 = 0, count_age30_weight40to80 = 0, count_ageBelow40_weight85_or_height200 = 0;

    for (int i = 1; i <= 50; i++) {
        scanf("%d %f %f", &age, &height, &weight);

        if (age >= 20 && height >= 160)
            count_age20_height160++;

        if (age < 20 && (height <= 180 || weight >= 60))
            count_ageBelow20_height180_or_weight60++;

        if (age >= 30 && weight >= 40 && weight <= 80)
            count_age30_weight40to80++;

        if (age < 40 && (weight < 85 || height <= 200))
            count_ageBelow40_weight85_or_height200++;

        total_age += age;
        total_height += height;
        total_weight += weight;
    }

    printf("Age >= 20 and Height >= 160: %d\n", count_age20_height160);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", count_ageBelow20_height180_or_weight60);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", count_age30_weight40to80);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", count_ageBelow40_weight85_or_height200);
    printf("Average Age: %d\n", total_age / 50);
    printf("Average Height: %.2f\n", total_height / 50);
    printf("Average Weight: %.2f", total_weight / 50);

    return 0;
}

