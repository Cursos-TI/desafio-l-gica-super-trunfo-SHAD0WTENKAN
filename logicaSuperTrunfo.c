#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    // Declaração das variáveis da Carta 1
    char estado1[50];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1; 
    float percapita1; 
    float superpoder1;

    // Declaração das variáveis da Carta 2
    char estado2[50];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float percapita2;
    float superpoder2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // (Repita para cada propriedade)


    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (sigla, ex: SP): ");
    scanf(" %s", estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    //Calculos Carta 1
    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + percapita1 + ( 1 / densidade1);

    //========================================================================================================

     // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (sigla, ex: SP): ");
    scanf(" %s", estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    //Calculos Carta 2
    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + percapita2 + (1 / densidade2);

    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

     // COMPARAÇÃO (ATRIBUTOS)
    // ========================
    printf("\n=== Comparacao de Cartas ===\n");

    printf("Atruibuto População:\n");
    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
    // Lógica com IF
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s): venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s): venceu!\n", cidade2);
    }

    printf("\nAtributo Area:\n");
    printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
     if (area1 > area2) {
        printf("Resultado: Carta 1 (%s): venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s): venceu!\n", cidade2);
    }

    printf("\nAtributo PIB:\n");
    printf("Carta 1 - %s (%s): R$ %.2f \n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): R$ %.2f \n", cidade2, estado2, pib2);
     if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s): venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s): venceu!\n", cidade2);
    }

    printf("\nAtributo Pontos Turisticos:\n");
    printf("Carta 1 - %s (%s): %d \n", cidade1, estado1, pontos1);
    printf("Carta 2 - %s (%s): %d \n", cidade2, estado2, pontos2);
     if (pontos1 > pontos2) {
        printf("Resultado: Carta 1 (%s): venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s): venceu!\n", cidade2);
    }

    printf("\nAtributo Densidade Populacional:\n");
    printf("Carta 1 - %s (%s): %.2f hab/km²\n ", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n ", cidade2, estado2, densidade2);
     if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s): venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s): venceu!\n", cidade2);
    }

    printf("\nAtributo PIB Per Capita:\n");
    printf("Carta 1 - %s (%s): %.2f reais\n", cidade1, estado1, percapita1);
    printf("Carta 2 - %s (%s): %.2f reais\n", cidade2, estado2, percapita2);
     if (percapita1 > percapita2) {
        printf("Resultado: Carta 1 (%s): venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s): venceu!\n", cidade2);
    }

    printf("\ntributo Super Poder:\n");
    printf("Carta 1 - %s (%s): %.2f \n", cidade1, estado1, superpoder1);
    printf("Carta 2 - %s (%s): %.2f \n", cidade2, estado2, superpoder2);
     if (superpoder1 > superpoder2) {
        printf("Resultado: Carta 1 (%s): venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s): venceu!\n", cidade2);
    }




    return 0;
}
