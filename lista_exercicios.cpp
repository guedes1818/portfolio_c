int main(){
	int ano = 2018;
	float salario = 1000;
	float percentual = 1.5;
	
while(ano<=2025){
	salario += salario  * (percentual/100);
	percentual *=2;
	ano ++;
}

	 printf("Salario em 2025: R$%.2f\n", salario);
	return 0; 
}


