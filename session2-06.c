#include <stdio.h>

int main() {
   
    const float PI = 3.14;
    
    
    float radius;
    
    
    printf("Nhap b�n k�nh h�nh tr�n: ");
    scanf("%f", &radius);
    
    
    float circumference = 2 * PI * radius; 
    float area = PI * radius * radius;     
    
    
    printf("Chu vi h�nh tr�n l�: %.2f\n", circumference);
    printf("Dien t�ch h�nh tr�n l�: %.2f\n", area);
    
    return 0;
}
