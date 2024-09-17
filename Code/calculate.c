#include<stdio.h>
int main() {
    // Declare Variables
    int n1, n2, Addition, Substraction, mult, Div;

    //Need Input
    printf("Enter First Number :");
    scanf("%d", & n1);
    printf("Enter Second Number :");
    scanf("%d", & n2);

    //Operator Operation
    Addition = n1 + n2;
    Substraction = n1 - n2;
    mult = n1 * n2;
    Div = n1 / n2;

    //Output Or Display
    printf("Addition : %d\n", Addition);
    printf("Substraction : %d\n", Substraction);
    printf("Multiplication : %d\n", mult);
    printf("Division : %d\n", Div);

    //Return Statemant
    return ;
}
