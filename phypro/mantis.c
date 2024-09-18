#include<stdio.h>
int fibo(int n){
        if(n <= 2){
            return 1;
        }
        else{
            return  fibo(n-1)+fibo(n-2);
        }
    }
int main(){
    int num;
    int sum = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
      sum += fibo(i);
   }
   printf("method = %d", sum);
    return 0;
}