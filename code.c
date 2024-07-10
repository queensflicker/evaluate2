#include <stdio.h>
#include<unistd.h>
  void restoringDivision(int dividend, int divisor, int n, int *quotient, int *remainder) {
    int A = 0;  
    int Q = dividend;  
    int M = divisor;  

    for (int i = 0; i < n; i++) {
       
        A = (A << 1) | ((Q & (1 << (n - 1))) >> (n - 1));
        Q = Q << 1;

         A = A - M;
         if (A < 0) {
           Q = Q & ~(1 << 0);
            A = A + M;
        } else {
           Q = Q | (1 << 0);
        }
    }
    *quotient = Q;
    *remainder = A;
}



