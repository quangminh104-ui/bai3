#include <stdio.h>
int main(){
    float a, b;
    printf("Nhap vao so thu nhat: ");
    scanf("%f", &a);
    printf("Nhap vao so thu hai: ");
    scanf("%f", &b);
    printf("Tich cua hai so la: %.2f", a * b);
    return 0;
}