//Write a program to calculate the sum of numbers stored in an array of size 10. Take
//array values from the user.

#include<stdio.h>
int main(){

    int a[10],i,sum=0;
    
    for(i=0;i<10;i++){
        printf("enter num :\n");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;

}