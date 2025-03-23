/*
    Codeforces problem 427A
    Autor: Matheus Procopio Duarte
*/

#include <stdio.h>
int main (void){
    int n, events, police, crimes;
    scanf("%d", &n);

    police=0; // Inicializa a quantidade de policiais dispn�veis //
    crimes=0; // Inicializa a quantidade de crimes n�o resolvidos //

    for (int i=0; i<n; i++){ // Come�a um loop "for" para cada evento que ocorrer //
        scanf("%d", &events);
        if (events>0){ // Se o evento for positivo, significa que policiais foram contratados //
            police+= events;
        } else { // Se o evento for negativo, significa que um crime ocorreu //
            if (police>0){ // Se tiver policiais dispon�veis, um deles atende ao crime //
            police--;
            } else { // Se nao houver policiais disnpo�veis, o crime fica sem solu��o e � computado //
            crimes++;
            }
        }
    }

    printf("%d\n", crimes); // Impress�o do n�mero total de crimes n�o solucionados com base nos fatores limitantes //
    return 0;
}


