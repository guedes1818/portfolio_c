#include <stdio.h>

int main() {
    char frase[200];
    char nome1[500] = "", nome2[500] = "", nome3[500] = "", nome4[500] = "", nome5[500] = "";
    int numnome = 0, cont = 0;
    int i = 0;
    
    fgets(frase, 200, stdin);

    do {
        if (frase[i] != ' ' && frase[i] != '\n' && frase[i] != '\0') {
         
            switch (numnome) {
                case 0: nome1[cont++] = frase[i]; break;
                case 1: nome2[cont++] = frase[i]; break;
                case 2: nome3[cont++] = frase[i]; break;
                case 3: nome4[cont++] = frase[i]; break;
                case 4: nome5[cont++] = frase[i]; break;
            }
        } else {
   
            switch (numnome) {
                case 0: nome1[cont] = '\0'; break;
                case 1: nome2[cont] = '\0'; break;
                case 2: nome3[cont] = '\0'; break;
                case 3: nome4[cont] = '\0'; break;
                case 4: nome5[cont] = '\0'; break;
            }
            numnome++;
            cont = 0;
        }
        i++;
    } while (frase[i] != '\0' && numnome < 5);

   
    if (cont > 0 && numnome < 5) {
        switch (numnome) {
            case 0: nome1[cont] = '\0'; break;
            case 1: nome2[cont] = '\0'; break;
            case 2: nome3[cont] = '\0'; break;
            case 3: nome4[cont] = '\0'; break;
            case 4: nome5[cont] = '\0'; break;
        }
    }

    printf("Nome1: %s\n", nome1);
    printf("Nome2: %s\n", nome2);
    printf("Nome3: %s\n", nome3);
    printf("Nome4: %s\n", nome4);
    printf("Nome5: %s\n", nome5);

    return 0;
}
