#include <stdio.h>

int main() {
// Ki?u s? nguyên: int
    int soNguyen = 10; // Luu tr? s? nguyên, thu?ng có kích thu?c 4 byte trên h?u h?t các h? th?ng.

    // Ki?u s? th?c: float
    float soThuc = 3.14f; // Luu tr? s? th?c v?i d? chính xác don, thu?ng có kích thu?c 4 byte.

    // Ki?u s? th?c chính xác kép: double
    double soThucChinhXacCao = 3.141592653589793; // Luu tr? s? th?c v?i d? chính xác kép, thu?ng có kích thu?c 8 byte.

    // Ki?u ký t?: char
    char kyTu = 'A'; // Luu tr? m?t ký t? don, thu?ng có kích thu?c 1 byte.

    // Ki?u logic (boolean): _Bool
    
    // Ho?c s? d?ng thu vi?n <stdbool.h>
    // #include <stdbool.h>
    // bool logic = true; // Cách khác khi s? d?ng <stdbool.h>, giá tr? true/false du?c d?nh nghia s?n.

    // Ki?u s? nguyên không d?u: unsigned int
    unsigned int soNguyenKhongDau = 100; // Luu tr? s? nguyên không âm, thu?ng có kích thu?c 4 byte.

    // Ki?u s? nguyên dài: long
    long soNguyenDai = 1000000L; // Luu tr? s? nguyên có giá tr? l?n hon int, thu?ng có kích thu?c 4 ho?c 8 byte.

    // Ki?u con tr? (pointer): int*
    int *conTro = &soNguyen; // Luu tr? d?a ch? c?a bi?n, con tr? ki?u int* tr? d?n d?a ch? c?a bi?n ki?u int.

    // In ra màn hình d? ki?m tra giá tr? c?a các bi?n
    printf("So nguyen: %d\n", soNguyen);
    printf("So thuc: %f\n", soThuc);
    printf("So thuc chinh xac cao: %lf\n", soThucChinhXacCao);
    printf("Ky tu: %c\n", kyTu);
    printf("So nguyen khong dau: %u\n", soNguyenKhongDau);
    printf("So nguyen dai: %ld\n", soNguyenDai);
    printf("Gia tri cua con tro: %p\n", (void*)conTro);

    return 0;	
}

