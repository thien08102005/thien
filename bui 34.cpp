// Nhap so nguyen duong n
//tin chu so nho nhat va lon nhat trong n
#include<stdio.h>
int main()
{
	int n,tam,min=9,max=0;
	do{
		 printf("nhap n:");
		 scanf("%d", &n);
	}while(n<=0);
	// n la cac so tu 0 den 9
	{
		 tam=n%10;
		 if(tam > max) max=tam;
		 if(tam < min) min=tam;
		 n=n/10;
	}
	printf("Chu so lon nhat la: %d",max);
	printf("chu so nho nhat la:%d",min);
	
}

	
	
	

