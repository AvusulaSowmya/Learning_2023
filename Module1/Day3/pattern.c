#include<stdio.h>

int print_numbers(int n);
int print_space(int n);
int print(int n);

int main(){
	int n;
	scanf("%d",&n);
	for(int i=n;i>=1;i--){
		print_numbers(i);
		print_space(2*(n-i));
		print(i);
		printf("\n");
	}
	return 0;
}

int print_numbers(int n){
	for(int i=1;i<=n;i++){
		printf("%d",i);
	}
}

int print_space(int n){
	for(int i=1;i<=n;i++){
		printf(" ");
	}
}

int print(int n){
	for(int i =n;i>=1;i--){
		printf("%d",i);
	}
}
