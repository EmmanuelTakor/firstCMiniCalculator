#include<stdio.h>
#include<stdlib.h>



int max(int num1, int num2){
if(num1 > num2){
  return num1;
} else if(num2 > num1){
  return num2;
}
else return 0;
}


int main(){

printf("%d", max(2,4));

    return 0;
}
