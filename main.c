#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);    // sum
int subtract(int a, int b); // minus
int multiply(int a, int b); // multi
int divide(int a, int b);   // delenie
int calculate(int a, int b, char operation); //calc

int main() {
    int a, b;
    char operation;

    scanf("%d %d %c", &a, &b, &operation);    // Your code here
    if (b == 0 && operation == '/') {
        printf("Invalid input");
    } else printf("%d", calculate(a, b, operation));
    return 0;
}

// Implement your functions here

int calculate(int a, int b, char operation) {
    switch (operation) {
    case '+':
        add(a, b);
        break;
    
    case '-':
        subtract(a, b);
        break;
    
    case '*':
        multiply(a, b);
        break;

    case '/':
        divide(a, b);
        break;

    case 'q':
        exit(0);
        break;
    }
}
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    return a / b;
}