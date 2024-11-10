#include <stdio.h>
#include <cs50.h>

int main(void){
      int a;
       do{
     a = get_int("Please enter a number between 0 and 49 to calculate its factorial:");
       } while(a<0 || a>49);
   unsigned long long result= 1;

    for(int i=1; i<=a; i++){
        result*=i;
    }
    printf("%d=! %llu",a,  result);
}

