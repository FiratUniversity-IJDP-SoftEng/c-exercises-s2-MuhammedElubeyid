#include <stdio.h>

int length(void);

int main (void){
    int numbers[length()];

    int j=0;
    for(int i= 100; i>=50; i--){
        if(i%3 == 0){
        numbers[j]=i;
        printf("%d",numbers[j]);
        if(j< length()- 1){
            printf(", ");
        }
        j++;
    }
    }
}

int length(void){
      int sum= 0;
    for(int i= 100; i>=50;i--){
        if(i%3 == 0){
          sum++;
        }
    }
    return sum;
}
