#include <stdio.h>
// Desafio Super Trunfo
// Cartas Cadastradas
int main(){

    char Estado, Codigo[20], Nome[50];
    int Populacao, Pontosturisticos;
    float Area, PIB;
    
    //Primeira Carta
    printf ("Digite o estado: \n");
    scanf (" %c", &Estado);

    printf ("Digite o Código da carta: \n");
    scanf ("%s", Codigo);

    printf ("Digite o Nome da cidade: \n");
    scanf ("%s", &Nome);

    printf ("Digite a População: \n");
    scanf ("%d", &Populacao);

    printf ("Digite a Área (em km²): \n");
    scanf (" %f", Area);

    printf ("Digite o PIB: \n");
    scanf ("%f", &PIB);

    printf ("Digite a quantidade de Pontos turísticos: \n");
    scanf ("%d", &Pontosturisticos);

// Segunda carta

    char Estado2, Codigo2[20], Nome2[50];
    int Populacao2, Pontosturisticos2;
    float Area2, PIB2;

    printf ("Digite o estado: \n");
    scanf (" %c", &Estado2);

    printf ("Digite o Código da carta: \n");
    scanf ("%s", Codigo2);

    printf ("Digite o Nome da cidade: \n");
    scanf ("%s", &Nome2);

    printf ("Digite a População: \n");
    scanf ("%d", &Populacao2);

    printf ("Digite a Área (em km²): \n");
    scanf (" %f", &Area2);

    printf ("Digite o PIB: \n");
    scanf ("%f", &PIB2);

    printf ("Digite a quantidade de Pontos turísticos: \n");
    scanf ("%d", &Pontosturisticos2);
// Exibir resultados

    printf("\n Primeira Carta\n");
    printf ("Estado: %c\n", Estado);
    printf ("Código da cidade: %s\n", Codigo);
    printf ("Nome da cidade: %s\n", Nome);
    printf ("População: %d\n", Populacao);
    printf ("Área (em km²): %.2f\n", Area);
    printf ("PIB: %.2f\n", PIB);
    printf ("Quant. de Pontos Turísticos: %d\n", Pontosturisticos);

    printf("\n Segunda Carta\n");
    printf ("Estado: %c\n", Estado2);
    printf ("Código da cidade: %s\n", Codigo2);
    printf ("Nome da cidade: %s\n", Nome2);
    printf ("População: %d\n", Populacao2);
    printf ("Área (em km²): %.2f\n", Area2);
    printf ("PIB: %.2f\n", PIB2);
    printf ("Quant. de Pontos Turísticos: %d\n", Pontosturisticos2);

    return 0;
}
