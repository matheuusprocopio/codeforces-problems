/*
    Codeforces problem 427A
    Autor: Matheus Procopio Duarte
*/

#include <stdio.h>
int main (void){
    int n, events, police, crimes;
    scanf("%d", &n);

    police=0; // Inicializa a quantidade de policiais dispníveis //
    crimes=0; // Inicializa a quantidade de crimes não resolvidos //

    for (int i=0; i<n; i++){ // Começa um loop "for" para cada evento que ocorrer //
        scanf("%d", &events);
        if (events>0){ // Se o evento for positivo, significa que policiais foram contratados //
            police+= events;
        } else { // Se o evento for negativo, significa que um crime ocorreu //
            if (police>0){ // Se tiver policiais disponíveis, um deles atende ao crime //
            police--;
            } else { // Se nao houver policiais disnpoíveis, o crime fica sem solução e é computado //
            crimes++;
            }
        }
    }

    printf("%d\n", crimes); // Impressão do número total de crimes não solucionados com base nos fatores limitantes //
    return 0;
}


