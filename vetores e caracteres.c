#include <stdio.h>

void TrocaLetra(char arvalap[50], int tamanho)
   {
   int ii, tam;
   char temp;
   	
   tam = tamanho / 2;
   
   for (ii=0; ii<tam; ii++)
      {
      temp = arvalap[ii];	
      arvalap[ii]=arvalap[tamanho-1-ii];
      arvalap[tamanho-1-ii] = temp;
	  }	
   }

int main (){

char frase[200];
char palavra[50];
int contfrase, contpalavra, tampalavra, indicepalavra, achoupalavra;

char ordemVetor [50];
int indiceOrdem;

int i, j;
int temp;

//
// ler a frase só, com palavras separadas por espaço...
fgets(frase, 200, stdin);

contfrase = 0;
contpalavra = 0;
tampalavra = 0;
indicepalavra = 0;
achoupalavra = 0;

//
// colocar os nomes nos 5 vetores...
while (contfrase < 200)
   {
   if ((frase[contfrase] != ' ') && (frase[contfrase] != '\n')) 
      {
      if (achoupalavra == 0)	
         {
         // 
         // guarda inicio da palavra
         palavra[indicepalavra] = frase[contfrase];
         contpalavra = contfrase;
         tampalavra++;
         indicepalavra++;
         achoupalavra = 1;
         }
      else
	     {
         palavra[indicepalavra] = frase[contfrase];
         tampalavra++;
         indicepalavra++;
	     }	  
      }  
   else
      {
      // espaço em branco ou fim da frase...
	  // se tiver palavra...
	  if (achoupalavra == 1)
	     {
	     // troca vetor da palavra
		 TrocaLetra (palavra, tampalavra);	
		 //
		 // joga de volta na frase
		 i = contpalavra;
		 for (j=0; j<tampalavra; j++)
		    {
		    frase[i] = palavra [j];
		    i++;
			}
		 //
         contpalavra = 0;
         tampalavra = 0;
         indicepalavra = 0;
         achoupalavra = 0;
		 }	
	
	   //
	   //
	   if (frase[contfrase] == '\n')
	     break;
	   //  
		 
	  } 

      contfrase++;
   }
   
//
//
// imprimr os vetores a partir das iniciais no vetor ordenado...
printf("\n");
printf("Frase digitada com palavras ao contrario: \n");
printf("%s", frase);	

return 0;	
}
