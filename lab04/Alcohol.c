#include <stdio.h>
 
int main() {
    char gender, has_license;
    float weight, volume_per_can, alcohol_percent;
    int num_cans, rest_hours;
 
    scanf("%c %f %c %f %f %d %d", &gender, &weight, &has_license, &volume_per_can, &alcohol_percent, &num_cans, &rest_hours);         
 
    float alcohol_grams = (alcohol_percent * (volume_per_can * num_cans)) / 100.0;
 
    float bac = 0.0;
    if (gender == 'M') {
        bac = alcohol_grams / (weight * 0.68 * 10.0);
    } else if (gender == 'F') {
        bac = alcohol_grams / (weight * 0.55 * 10.0);
    }
     
    bac -= rest_hours * 0.015;
    if (bac < 0) bac = 0; // BAC ไม่ควรติดลบ
 
    if (has_license == 'Y' && bac <= 0.05) {
        printf("Safe\n");
    } else {
        printf("Not Safe\n");
    }
 
    return 0;
}
