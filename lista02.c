#include <stdio.h>
#define  PI 3.14159
float CalculaAreaCirculo(float raio){
	float area;
	
	area = PI * raio *raio;
	
	return area;
}

int main(){
	float raio, areaCirculo;
	printf("Digite o raio do circulo");
	scanf("%f", &raio);
	
	areaCirculo = CalculaAreaCirculo (raio);
	
	printf("\n");
	printf("Area do circulo = %.2f \n \n", areaCirculo);
	
	return 0 ;
}








