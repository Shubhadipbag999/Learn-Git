#include<stdio.h>
int main(){
    int firstNumber,secondNumber,sum;
    printf("\nEnter The First Number: ");
    scanf("%d",&firstNumber);
    printf("\nEnter The Second Number: ");
    scanf("%d",&secondNumber);
    sum = firstNumber + secondNumber;
    printf("\nSum of Your Given Two Number: %d",sum);
    return 0;
}