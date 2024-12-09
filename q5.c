//Write a program to find the smallest number stored in an array of size 10. Take array
//values from the user

#include<stdio.h>
int main(){

    int a[10],i,min = 100;
  
    
    for(i=0;i<10;i++){
        printf("enter num :\n");
        scanf("%d",&a[i]);
        if(min>a[i])
        min=a[i];
    }
    printf("%d is the smallest value ",min);
    return 0;

}