#include <stdio.h>
#include <stdlib.h>
int main() {
    char *str;
    int longer, hrtz, count = 0;
    char temp;
    scanf("%d\n", &longer);
    scanf("%d\n", &hrtz);
    str = (char*)malloc((longer + 1)* sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    scanf("%[^\n]s", str);
    while (*str){
        printf("%c", *str);
        str += hrtz;
    }
    return 0;
}
