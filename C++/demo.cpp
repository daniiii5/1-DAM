#include<stdio.h>

int main(){
    int num = 124883;
    int inverted = 0;
    for (inverted; num > 0; num/10){
        inverted = inverted*10 + num%10;
    }
    printf("%d", inverted);
}