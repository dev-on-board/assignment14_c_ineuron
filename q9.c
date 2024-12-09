//Write a program in C to read n number of values in an array and display it in reverse
//order. Take array values from the user.

#include<stdio.h>
int main(){
    int n;
    printf("total numbers you want ");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the numbers ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>0;i--){
        printf("%d ",a[i]);
    }
    
    return 0;
}