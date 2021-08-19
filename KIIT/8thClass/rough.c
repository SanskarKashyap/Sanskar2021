#include <stdio.h>
void main(){
    int n = 1, m = 0, range = 6000;
    while (m < range){
        if (n % 2 == 0){
            m = n * n;
            if (m > 1000){
                if (m < range){
                    printf("%d\n", n);
                }
            }
        }
        n++;
    }
}