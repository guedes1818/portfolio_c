#include <stdio.h>

float CalcularMedia(float nota1,float nota2,float nota3,char media){
float mediacalculada;

if (media == 'A')
{
	mediacalculada = (nota1 + nota2 + nota3) /3;
}

else{
	mediacalculada = ((nota1*5)+(nota2*3)+(nota3*2))/10.0;
}
return mediacalculada;	
}


int main(){
	float nota1,nota2,nota3;
	float media;
	char tipomedia;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a primeira nota: ");
	scanf("%f", &nota2);
	printf("Digite a primeira nota: ");
	scanf("%f", &nota3);
	
	printf("Tipo de media (A/P) = ");
	scanf("%c", &tipomedia);
	
	media = Calcularmedia(nota1,nota2,nota3,tipomedia);
	printf("Media Calculada = %f",media);
	return 0;
	
}
