#include<stdio.h>
int main(){
    int firstNumber,secondNumber,div;
    printf("\nEnter The First Number: ");
    scanf("%d",&firstNumber);
    printf("\nEnter The Second Number: ");
    scanf("%d",&secondNumber);
    div = firstNumber / secondNumber;
    printf("\ndivisionn of Your Given Two Number: %d",div);
    return 0;
}