#include <stdio.h>
#include <cs50.h>

int main(void){

  int numbers[10];
  int sum= 0;

   for(int i=0; i<10; i++){
    numbers[i]= get_int("Please enter the %d. number", i+1);
     sum+= numbers[i];
   }

     printf("Your numbers are:\n");
     for(int i=0; i<10; i++){
        printf("%d ",numbers[i]);
      }
      printf("\n");

     printf("sum: %d\n", sum);
     printf("Average: %.2f\n", sum/ 10.0);

}

