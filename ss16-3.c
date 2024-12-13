#include <stdio.h>

void sum(int* a, int* b, int* result) {
    *result = *a + *b;  
}

int main() {
    int x = 5, y = 10;  
    int result;        
    sum(&x, &y, &result); 
    printf("Tong cua x va y: %d\n", result);

    return 0;
}
