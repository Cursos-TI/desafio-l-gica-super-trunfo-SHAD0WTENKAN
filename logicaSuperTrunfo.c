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
    //float superpoder1;

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
    //float superpoder2;
    
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
    //superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + percapita1 + ( 1 / densidade1);

    //========================================================================================================

     // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (sigla, ex: PR): ");
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
    //superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + percapita2 + (1 / densidade2);

    
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


    
    // =====================================================================================

    // MENU
    // ========================================================================================
    int op1, op2;

    //MENU 1========================================
    printf("=== SUPER TRUNFO - COMPARAÇÃO ===\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade\n");
    scanf("%d", &op1);

    //MENU 2 ===========================================    

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    if (op1 != 1) printf("1 - Populacao\n");
    if (op1 != 2) printf("2 - Area\n");
    if (op1 != 3) printf("3 - PIB\n");
    if (op1 != 4) printf("4 - Pontos Turisticos\n");
    if (op1 != 5) printf("5 - Densidade\n");
    scanf("%d", &op2);

    //=================================================================

    // Impede escolha repetida
    if (op1 == op2) {
        printf("Erro: atributos iguais!\n");
        return 0;
    }

    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

      // ========================
    // ATRIBUTO 1
    // ========================
    switch(op1) {
        case 1:
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
            break;
        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            break;
        case 3:
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            break;
        case 4:
            valor1_c1 = pontos1;
            valor1_c2 = pontos2;
            break;
        case 5:
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    // ========================
    // ATRIBUTO 2
    // ========================
    switch(op2) {
        case 1:
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
            break;
        case 2:
            valor2_c1 = area1;
            valor2_c2 = area2;
            break;
        case 3:
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            break;
        case 4:
            valor2_c1 = pontos1;
            valor2_c2 = pontos2;
            break;
        case 5:
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

     // ========================
    // COMPARAÇÃO INDIVIDUAL
    // ========================
    int v1_attr1, v1_attr2;

    // Regra densidade invertida (if aninhado)
    if (op1 == 5) {
        v1_attr1 = (valor1_c1 < valor1_c2) ? 1 : 0;
    } else {
        v1_attr1 = (valor1_c1 > valor1_c2) ? 1 : 0;
    }

    if (op2 == 5) {
        v1_attr2 = (valor2_c1 < valor2_c2) ? 1 : 0;
    } else {
        v1_attr2 = (valor2_c1 > valor2_c2) ? 1 : 0;
    }

    // ========================
    // SOMA DOS ATRIBUTOS
    // ========================
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    // ========================
    // RESULTADO FINAL (TERNÁRIO)
    // ========================
    int vencedor = (soma1 > soma2) ? 1 : (soma2 > soma1) ? 2 : 0;

    // ========================
    // SAÍDA
    // ========================
    printf("\n=== RESULTADO FINAL ===\n");

    printf("%s -> %.2f + %.2f = %.2f\n", estado1, valor1_c1, valor2_c1, soma1);
    printf("%s -> %.2f + %.2f = %.2f\n", estado2, valor1_c2, valor2_c2, soma2);

    if (vencedor == 1) {
        printf("Vencedor: %s\n", estado1);
    } else if (vencedor == 2) {
        printf("Vencedor: %s\n", estado2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}