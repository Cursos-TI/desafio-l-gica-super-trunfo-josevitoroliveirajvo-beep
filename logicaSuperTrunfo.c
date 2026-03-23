#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char codigo1[5], nome1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1;

    // Variáveis da Carta 2
    char codigo2[5], nome2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2;

    // Cadastro Carta 1
    printf("--- Cadastro Carta 1 ---\n");
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome: "); scanf(" %[^\n]", nome1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    densidade1 = (float)populacao1 / area1;

    // Cadastro Carta 2
    printf("\n--- Cadastro Carta 2 ---\n");
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome: "); scanf(" %[^\n]", nome2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    densidade2 = (float)populacao2 / area2;

    // Comparação de População
    printf("\n--- Resultado da Comparação (População) ---\n");
    printf("%s: %lu\n", nome1, populacao1);
    printf("%s: %lu\n", nome2, populacao2);

    if (populacao1 > populacao2) {
        printf("Vencedor: %s\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Vencedor: %s\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
