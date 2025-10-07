#include <stdio.h>
float average(int a, int b, int c);

int main() {
    int O, B, C;
    float avg;

    
    printf("กรอกจํานวน o: ");
    scanf("%d", &O);

    printf("กรอกจํานวน b: ");
    scanf("%d", &B);

    printf("กรอกจํานวน c: ");
    scanf("%d", &C);

    
    avg = average(O, B, C);

    
    printf("\n--- มูลค่าธุรกรรมรวม ---\n");
    printf("O = %d\n", O);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("Average = %.2f\n", avg);

    return 0;
}


float average(int a, int b, int c) {
    float result;
    result = (a + b + c) / 3.0;  
    return result;               
}

#include <stdio.h>
void swap(int *a, int *b); 


int brief() {
    int x = 15, y = 40;
    printf("Before: x = %d, y = %d\n", x, y);

    swap(&x, &y); 
    printf("After: x = %d, y = %d\n", x, y);

    return 0;
}


void swap(int *a, int *b) {
    int temp;  

    temp = *a; 
    *a = *b;   
    *b = temp; 
}