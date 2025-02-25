#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int product=1;
    for(int i=1;i<a+1;i++){
        product*=i;
    }
    printf("The factorial of  %d is %d\n",a,product);
    return 0;
}