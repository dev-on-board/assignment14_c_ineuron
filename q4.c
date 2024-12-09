//Write a program to find the greatest number stored in an array of size 10. Take array
//values from the user.

#include<stdio.h>
int main(){

    int a[10],i,max=-1;
    
    for(i=0;i<10;i++){
        printf("enter num :\n");
        scanf("%d",&a[i]);
        if(max<a[i])
        max=a[i];
    }
    printf("%d is the greatest value ",max);
    return 0;

}