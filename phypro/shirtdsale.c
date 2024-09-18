#include<stdio.h>
int main(){
    float raka, pc;
    int amou;
    scanf("%f\n%f\n%d", &raka, &pc, &amou);
    if (((raka*amou)-(raka*amou)*(pc/100)) > (raka*amou)-((amou/3)*raka)){
        float thaem = (raka*amou)-((amou/3)*raka);
        printf("Buy 2 Get 1\n%.2f", thaem);
    }else {
        float lod = (raka*amou)-(raka*amou)*(pc/100);
        printf("Discount %.0f%%\n%.2f", pc, lod );
    }
    return 0;
}
