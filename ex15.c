#include <stdio.h>

int main (void){
  for(int i= 1; i< 5;i++){
    for(int j= i; j<= 5; j++){
      printf("  ");
    }
    for(int j= 1; j<= i; j++){
      printf("%d ", j);
    }
    for(int j= i-1; j>=1; j--){
      printf("%d ", j);
    }
    printf("\n");
  }

  for(int i= 5; i>= 1;i--){
    for(int j= i; j<= 5; j++){
      printf("  ");
    }
    for(int j= 1; j<= i; j++){
      printf("%d ", j);
    }
    for(int j= i-1; j>=1; j--){
      printf("%d ", j);
    }
    printf("\n");
  }

}

