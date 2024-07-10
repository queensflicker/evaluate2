#include <stdio.h>
#include<unistd.h>
void restoringDivision(int dividend, int divisor, int n, int *quotient, int *remainder);

int main() {
    int dividend = 25; 
    int divisor = 3;  
    int n = sizeof(int) * 8;  

    int quotient = 0;
    int remainder = 0;

    restoringDivision(dividend, divisor, n, &quotient, &remainder);

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
