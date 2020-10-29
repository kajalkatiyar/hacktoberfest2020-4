#include<stdio.h>

int fibo(int n);
int main(){
	int a;
	printf("Enter no. of digits in fibonacci series:");
	scanf("%d",&a);
	//printf("%d", fibo(a));
	return fibo(a);
}

int fibo(int n){
	int i,a=0, b=1,c;
	if(n==1){
		printf("%d ",a);
	}
	if(n==2){
		printf("%d %d ",a,b);
	}
	if(n>2) {
		printf("%d %d ",a,b);
		for(i=2;i<n;i++){
			c=a+b;
			a=b;
			b=c;
			printf("%d ",c);
		}
	}
}
