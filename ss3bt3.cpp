#include<stdio.h>
int main(){
	int n;
	printf("moi nhap vao so nguyen n: ");
	scanf("%d",&n);
	if(n%3==0||n%5==0||n%3==0&&n%5==0){
		printf("%d la so can tim");
	}
	
	return 0;
}
