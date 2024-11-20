#include <stdio.h>

int main() {
// Ki?u s? nguy�n: int
    int soNguyen = 10; // Luu tr? s? nguy�n, thu?ng c� k�ch thu?c 4 byte tr�n h?u h?t c�c h? th?ng.

    // Ki?u s? th?c: float
    float soThuc = 3.14f; // Luu tr? s? th?c v?i d? ch�nh x�c don, thu?ng c� k�ch thu?c 4 byte.

    // Ki?u s? th?c ch�nh x�c k�p: double
    double soThucChinhXacCao = 3.141592653589793; // Luu tr? s? th?c v?i d? ch�nh x�c k�p, thu?ng c� k�ch thu?c 8 byte.

    // Ki?u k� t?: char
    char kyTu = 'A'; // Luu tr? m?t k� t? don, thu?ng c� k�ch thu?c 1 byte.

    // Ki?u logic (boolean): _Bool
    
    // Ho?c s? d?ng thu vi?n <stdbool.h>
    // #include <stdbool.h>
    // bool logic = true; // C�ch kh�c khi s? d?ng <stdbool.h>, gi� tr? true/false du?c d?nh nghia s?n.

    // Ki?u s? nguy�n kh�ng d?u: unsigned int
    unsigned int soNguyenKhongDau = 100; // Luu tr? s? nguy�n kh�ng �m, thu?ng c� k�ch thu?c 4 byte.

    // Ki?u s? nguy�n d�i: long
    long soNguyenDai = 1000000L; // Luu tr? s? nguy�n c� gi� tr? l?n hon int, thu?ng c� k�ch thu?c 4 ho?c 8 byte.

    // Ki?u con tr? (pointer): int*
    int *conTro = &soNguyen; // Luu tr? d?a ch? c?a bi?n, con tr? ki?u int* tr? d?n d?a ch? c?a bi?n ki?u int.

    // In ra m�n h�nh d? ki?m tra gi� tr? c?a c�c bi?n
    printf("So nguyen: %d\n", soNguyen);
    printf("So thuc: %f\n", soThuc);
    printf("So thuc chinh xac cao: %lf\n", soThucChinhXacCao);
    printf("Ky tu: %c\n", kyTu);
    printf("So nguyen khong dau: %u\n", soNguyenKhongDau);
    printf("So nguyen dai: %ld\n", soNguyenDai);
    printf("Gia tri cua con tro: %p\n", (void*)conTro);

    return 0;	
}

