#include <stdio.h>
#include <cs50.h>

 int fact(int n){
    if(n ==1 ||n== 0){
        return 1;
    } else {
        return n*fact(n-1);
    }
 }

int main(void){

    int number;
    do{
        number = get_int("Please enter a number between 0 and 49 to calculate its factorial:");
    }while(number<0 || number >50);

     int result= fact(number);
     printf("%d! = %d", result, fact(number));
}

