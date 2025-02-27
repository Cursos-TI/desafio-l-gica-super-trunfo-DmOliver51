#include <stdio.h>
#include <string.h> 


struct carta {
    char nome[50];
    int populacao;
    float area, pib;
};
// Função principal
    int main (){
    struct carta c1,c2;
    char atributo[20];


    // Entrada de dados carta-1
    printf("carta1 - Nome");
    scanf(" %[^\n]", c1.nome);
    printf("Populacao: ");
    scanf("%d", &c1.populacao);
    printf("Area: ");
    scanf("%f", &c1.area);
    printf("PIB: ");
    scanf("%f", &c1.pib);

    //Entrada de dados carta-2

    printf("\nCarta 2 - Nome: ");
    scanf(" %[^\n]", c2.nome);
    printf("Populacao: ");
    scanf("%d", &c2.populacao);
    printf("Area: ");
    scanf("%f", &c2.area);
    printf("PIB: ");
    scanf("%f", &c2.pib);


    // Escolha do atributo
    printf("\nEscolha um atributo (populacao, area, pib): ");
    scanf("%s", atributo);

      // Comparação e resultado
      if (strcmp(atributo, "populacao") == 0) {
        printf("%s: %d | %s: %d\n", c1.nome, c1.populacao, c2.nome, c2.populacao);
        printf("Vencedor: %s\n", c1.populacao > c2.populacao ? c1.nome : c2.nome);
    } else if (strcmp(atributo, "area") == 0) {
        printf("%s: %.2f km² | %s: %.2f km²\n", c1.nome, c1.area, c2.nome, c2.area);
        printf("Vencedor: %s\n", c1.area > c2.area ? c1.nome : c2.nome);
    } else if (strcmp(atributo, "pib") == 0) {
        printf("%s: R$ %.2f | %s: R$ %.2f\n", c1.nome, c1.pib, c2.nome, c2.pib);
        printf("Vencedor: %s\n", c1.pib > c2.pib ? c1.nome : c2.nome);
    } else {
        printf("Atributo inválido!\n");
    }

    return 0;
}
