#include <stdio.h>

int main() {
   
    const float PI = 3.14;
    
    
    float radius;
    
    
    printf("Nhap bán kính hình tròn: ");
    scanf("%f", &radius);
    
    
    float circumference = 2 * PI * radius; 
    float area = PI * radius * radius;     
    
    
    printf("Chu vi hình tròn là: %.2f\n", circumference);
    printf("Dien tích hình tròn là: %.2f\n", area);
    
    return 0;
}
