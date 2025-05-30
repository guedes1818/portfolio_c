#include <stdio.h>

int resto (int a, int b){
	
	int q;
	 q = q%b;
	 return (a%q*b);
	
}
	
	 
	

int main(){
	
	int r;
	
	r = resto(654,67);
	printf("Resto: %d\n", r);
	
	return 0;
}



