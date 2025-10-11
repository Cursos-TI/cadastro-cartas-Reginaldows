// Nível aventureiro
#include <stdio.h>

int main() {
    // Variáveis
    char estado[2];              
    char codigo[4];              
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int numeros_pontos_turisticos;
    float densidade_populacional;
    float pib_capita;

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

    densidade_populacional = (float) (populacao / area);
    pib_capita = (float) (pib / populacao);

    // Saída dos dados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", numeros_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f reais\n", pib_capita);

    return 0;
}
