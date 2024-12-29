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

// #include <stdio.h>
//int main (void){
 // int counter= 0;
 // int total= 0;
 // float inter=0;
//  while(inter != -1){
  //    printf("enter the %d. number: ", counter+ 1);
  //    scanf("%f", &inter);
  //    if(inter != -1){
   //     total+= inter;
   //   counter++;
 //     }
//  }
//  printf("You've enterd %d ", counter);
//  printf("The total is %d ", total);
//  printf("The average is %.2f ", total/ counter);

//}

}
