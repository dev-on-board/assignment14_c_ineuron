//Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main(){

    int a[10],i,sumE=0,sumO=0;
    
    for(i=0;i<10;i++){
        printf("enter num :\n");
        scanf("%d",&a[i]);
        if(a[i]%2==0)
           sumE+=a[i];
        else
           sumO+=a[i];
    }
   
   printf("%d is the sum of all even numbers",sumE);
   printf("%d is the sum of all odd numbers",sumO);
   return 0;

}