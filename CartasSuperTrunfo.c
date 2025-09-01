#include <stdio.h>

struct Carta{
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main(){
    struct Carta carta1, carta2;

    printf("Cadastre suas Cartas Super Trunfo\n");

    printf("Cadastro da Carta 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // lê string com espaços
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n");

    // Cadastro da segunda carta
    printf("Cadastro da Carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Codigo da Carta: ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
