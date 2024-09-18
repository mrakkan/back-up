#include <stdio.h>
int main() {
    int ag, tall, wght;
    int t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    int sum_age;
    float sum_height, sum_weight;

    for (int i = 0; i < 50; i++) {
        scanf("%d %d %d", &ag, &tall, &wght);

        if (ag >= 20 && tall >= 160) {
            t1 = t1 + 1;
        }
        
        if (ag < 20 && (tall <= 180 || wght >= 60)) {
            t2 = t2 + 1;
        }
        
        if (ag >= 30 && wght >= 40 && wght <= 80) {
            t3 = t3 + 1;
        }
        
        if (ag < 40 && (wght < 85 || tall <= 200)) {
            t4 = t4 + 1;
        }

        sum_age = sum_age + ag;
        sum_height = sum_height + tall;
        sum_weight = sum_weight + wght;
    }

    printf("Age >= 20 and Height >= 160: %d", t1);
    printf("\n");
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d", t2);
    printf("\n");
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d", t3);
    printf("\n");
    printf("Age < 40 and Weight < 85 or Height <= 200: %d", t4);
    printf("\n");
    printf("Average Age: %d", sum_age / 50);
    printf("\n");
    printf("Average Height: %.2f", sum_height / 50.0);
    printf("\n");
    printf("Average Weight: %.2f", sum_weight / 50.0);
    return 0;
}