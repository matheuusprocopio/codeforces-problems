/*
    Codeforces problem 510A
    Autor: Matheus Procopio Duarte
*/

#include <stdio.h>
int main(){
    int n, m; // Declara as vari�veis que s�o as dimens�es da grade/matriz //
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){ // Inicia um loop que verifica cada linha da grade/matriz //
        for(int j=0; j<m; j++){ // Inicia um loop que verifica cada coluna da grade/matriz //
            if (i%2 == 0 || (i%4 == 3 && j == 0) || (i%4 == 1 && j == m -1))
        /*
            Verifica se a linha"i" � par - As linhas pares s�o impressas com "#" porque s�o o caminho horizontal
            Verifica se mod de i por 4 � 3 e se j=0 - Nas linhas em que i%4=3 o "#" aparece apenas na primeira coluna em que j=0, formando assim, a curva para esquerda
            Verifica se mod de i por 4 � 1 e se j=m-1 - Nas linhas em que i%4=1 o "#" aparece apenas na ultima coluna em que j=m-1, formando assim, a curva para a direita
        */
                printf("#");
            else // Se n�o entrar nas condi��es acima que imprime "#", o programa ir� imprimir um "."
                printf(".");
        }
        printf("\n");

    }

    return 0;
}
