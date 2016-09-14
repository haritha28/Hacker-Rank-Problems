#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    int flag = 0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    int sum1 = x1, sum2 = x2;
    for(int i = 0; i < 10000; i++){
        sum1 = sum1 + v1;
        sum2 = sum2 + v2;
        if( sum1 == sum2 ) {
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("NO");
    } else {
        printf("YES");
    }
     return 0;
}

