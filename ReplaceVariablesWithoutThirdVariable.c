/**
 *Omer Faruk Kocal
 *github.com/omerkocal
 */

#include <stdio.h>

int main() {
    
    int a = 1;
    int b = 2;
    
    printf("a is %d and b is %d at first\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("a is %d and b is %d now\n", a, b);
    
    return 0;
}
