// nhap so nguyen 3 chu so va tih tong 3 chu so do +  789=7+8+9=24
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n; int sum=0;
	printf("nhap so nguyen 3 chu so : ");
	scanf("%d", &n);
	if(n<100||n>999){
		printf("so khong hop le xin vui lòng nhap lai");
	}
	else{
	   do{             // 5 + 13
	 	sum+=n%10;     //sum1=sum+ n%10=18
	 	n/=10;
	  }while(n>0);
	  printf("Tong: %d",sum);
	 }
	  return 0;
}
	  
