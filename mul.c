#include<stdio.h>
int main(){
    int firstNumber,secondNumber,mul;
    printf("\nEnter The First Number: ");
    scanf("%d",&firstNumber);
    printf("\nEnter The Second Number: ");
    scanf("%d",&secondNumber);
    mul = firstNumber + secondNumber;
    printf("\nMultiplication of Your Given Two Number= %d",mul);
    return 0;
}