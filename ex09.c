#include <stdio.h>
#include <cs50.h>

int main (void){

    int numbers= 0;
     int i= 0;
     int sum = 0;
    while(numbers != -1){
      sum += numbers;
      i++;
      numbers= get_int("Enter the %d. number: ",i);
     // sum += numbers;
      // i++;
    }
    i--;
      printf("Sum: %d\n",sum);
      printf("Average: %f\n",sum/ (float)i);
      printf("%d",i);

}
