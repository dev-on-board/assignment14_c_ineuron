//Write a program in C to copy the elements of one array into another array.Take array
//values from the user.

#include<stdio.h>
int main(){
    int n;
    printf("total numbers you want ");
    scanf("%d",&n);
    int a[n],b[n],i;
    printf("enter the numbers ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    
    return 0;
}