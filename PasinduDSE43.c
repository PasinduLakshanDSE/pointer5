#include<stdio.h>
void calc(int *A){
	*A =*A * 10;
}
int main(){
	int z=6;
	calc(&z);
	printf("%d\n",z);
}