/* Codeforces problem 2060A
    Autor: Matheus Procopio Duarte
*/
#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

/* A fun��o "while" estabelece um loop para processar valores � medida que o valor de t descresce.
*/
    while (t--){
        int a1, a2, a3, a4, a5;
        scanf("%d %d %d %d", &a1, &a2, &a4, &a5);
        a3=a4-a2;

        int x=a5-a4;

/* Realiza- se o c�lculo de fibo1 com valores baseados em a3, e fibo2 com valores baseados em x, para
ser feito uma compara��o.
*/
        int fibo1=(a3+a2==a4)+(a4+a3==a5)+(a1+a2==a3);
        int fibo2=(x+a2==a4)+(a4+x==a5)+(a1+a2==x);
        int lim;

/* Ap�s ser feito a compara��o de fibo1 e fibo2, constata-se que o maior assume o valor "lim" ou m�ximo
*/
        if(fibo1>fibo2){
            lim=fibo1;
        }else{
            lim=fibo2;
        }
        printf ("%d\n", lim);
    }
    return 0;


}
