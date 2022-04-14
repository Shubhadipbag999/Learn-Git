#include<stdio.h>
int main(){
    int firstNumber,secondNumber,subtraction;
    printf("\nEnter The First Number: ");
    scanf("%d",&firstNumber);
    printf("\nEnter The Second Number: ");
    scanf("%d",&secondNumber);
    subtraction = firstNumber - secondNumber;
    printf("\nSubtraction of Your Given Two Number= %d",subtraction);
    return 0;
}