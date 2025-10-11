#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: Cadastro da primeira carta

int main() {
    // Variáveis
    char estado[2];              
    char codigo[4];              
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int numeros_pontos_turisticos;

    char estado2[2];              
    char codigo2[4];              
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numeros_pontos_turisticos2;

    // Entrada de dados
    printf("Cadastro da primeira carta\n");

    printf("Digite a letra da cidade (A a H): ");
    scanf("%s", estado);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%s", codigo);

    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nome_cidade, 50, stdin);

    printf("Digite o número de habitantes dessa cidade:");
    scanf("%d", &populacao);

    printf("Digite a área em quilômetros quadrados (km²): "); 
    scanf("%f", &area);

    printf("Digite o PIB dessa cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos dessa cidade: ");
    scanf("%d", &numeros_pontos_turisticos);
    
    // segunda carta
    printf("Cadastro da segunda carta\n");

    printf("Digite a letra da cidade (A a H): ");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%s", codigo2);

    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nome_cidade2, 50, stdin);

    printf("Digite o número de habitantes dessa cidade:");
    scanf("%d", &populacao2);

    printf("Digite a área em quilômetros quadrados (km²): "); 
    scanf("%f", &area2);

    printf("Digite o PIB dessa cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos dessa cidade: ");
    scanf("%d", &numeros_pontos_turisticos2);

    // Saída dos dados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", numeros_pontos_turisticos);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numeros_pontos_turisticos2);

    return 0;
}
