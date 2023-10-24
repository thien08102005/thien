#include<stdio.h>
int main() {
    int a, b;
    printf("nhap hai so nguyen a, b: ");
    scanf("%d%d", &a, &b);
    int sun = a + b;
    int mul = a * b;
    int sub = a - b;
    
    printf("%d + %d = %d\n", a, b, sun);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, mul);
    if(b == 0) {
    	printf("khong thuc hien duoc phep chia.");
    } else {
    	float div = (float)a / b;
    	printf("%d / %d = %f\n", a, b, div);
    }
    return 0;
    }

