#include<stdio.h>
int main(){
    float v1, v2, v3, media;
    printf("Valori:  \n Inserisci il primo valore: ");
    scanf("%f",&v1);
    printf("Inserisci il secondo valore: ");
    scanf("%f",&v2);
    printf("Inserisci il terzo valore: ");
    scanf("%f",&v3);
    media=(v1+v2+v3)/3;
    printf("Ecco la media %f", media);
}
