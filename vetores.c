#include <stdio.h>

int main(){
	int vet1[] = {10,20,30,40,50};
	int vet2[] = {11,22,33,44,55};
	int vet3[10];
	int x,y,z;
	x =  y = 0;
	
	for(z =0;z <10; z++){
	if (vet1 [x] < vet2 [y]){
		vet3 [z] =vet1 [x]; 
	x++;
	}
	else{
		vet3[z] = vet2[y];
		y++;
	}
	}
	for(z =0; z <10;z++){
		printf("%d",vet3[z]);
	}
		
				
	return 0; 												
}



