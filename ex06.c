#include <stdio.h>

int num(void);

int main(void){

int numbers[num()];
    int j=0;
    for(int i= 100; i>=50; i--){
    if(i%3 ==0){
     numbers[j]=i;
      printf("%d,",numbers[j]);
     j++;
       }
  }

}

int num(void){
int length= 0;
for(int i= 100; i>=50; i--){
    if(i%3 ==0){
        length++;
    }
}
  return length;
}
