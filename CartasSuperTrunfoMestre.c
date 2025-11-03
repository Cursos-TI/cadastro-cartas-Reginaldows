// Nível mestre
#include <stdio.h>

int main() {
    // Variáveis
    char estado[2], char codigo[4],char nome_cidade[50];
    int populacao, int numeros_pontos_turisticos;
    float area, float pib, float densidade_populacional, float pib_capita, float super_poder;

    char estado2[2], char codigo2[4],char nome_cidade2[50];
    int populacao2, int numeros_pontos_turisticos2;
    float area2, float pib2, float densidade_populacional2, float pib_capita2, float super_poder2;

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

    super_poder = (float) populacao + numeros_pontos_turisticos + area + pib + densidade_populacional + pib_capita

    //Segunda Carta

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

    densidade_populacional2 = (float) (populacao2 / area2);
    pib_capita2 = (float) (pib2 / populacao2);

    // Saída dos dados
    printf("");

    return 0;
}
