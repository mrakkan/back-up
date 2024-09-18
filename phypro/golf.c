#include <stdio.h>
#include <math.h>
int main() {
    int dg = 0, u = 0;
    double pi = 3.141592653589793;
    double rad = 0, h = 0;
    scanf("%d", &dg);
    scanf(" %d", &u);
    rad = (dg * pi) / 180;
    h = ((u * u) * (sin(rad) * sin(rad))) / (2 * 9.81);
    printf("theta (degree) : %d\n", dg);
    printf("u (m/s) : %d\n", u);
    printf("h (m) : %.4lf\n", h);
    return 0; 
}
