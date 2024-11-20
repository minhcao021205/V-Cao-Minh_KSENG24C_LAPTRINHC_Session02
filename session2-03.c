#include <stdio.h>

int main() {
    
    int a = 5;
    int b = 7;

          
    int hieu = a - b;      
    int tich = a * b;      
    float thuong = (float)a / b; 

    
    printf("Hieu cua %d va %d la: %d\n", a, b, hieu);
    printf("Tich cua %d va %d la: %d\n", a, b, tich);
    printf("Thuong cua %d va %d la: %.2f\n", a, b, thuong);

    return 0;
}
