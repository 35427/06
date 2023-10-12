#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b){
	int result;
	result = a+b;
	return result;
}

int square(int n){
	return n*n;
}

int get_max(int x, int y){
	if (x>y){
		return x;
	}
	else{
		return y;
	}
}

int main(){
	
	int a, b, n, x, y;
	
	a = 3;
	b = 10;
	n = 4;
	x = 8;
	y = 9;
	
	printf("sumTwo result : %d\n", sumTwo(a, b));
	printf("square result : %d\n", square(n));
	printf("get_max result : %d\n", get_max(x, y));
	
	
	
	return 0;
	
	
}
