#include <stdio.h>

int get_int() {
    int number;
    printf("Please enter an integer 1-8: ");
    scanf("%d", &number);
    return number;
}

int main()
{
    int n;
    do{
        n = get_int();
    }
    while(n < 1 || n > 8);
    
    for (int i = 1; i <= n; i++) {
        int spaces = n - i;  // Calculate the number of spaces to print
        
        // Print the leading spaces
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        
        // Print the # symbols
        for (int k = 0; k < i; k++) {
            printf("#");
        }
        
        printf("\n");  
    }
}
