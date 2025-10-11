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
    float super_poder;

    char estado2[2];              
    char codigo2[4];              
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numeros_pontos_turisticos2;
    float densidade_populacional2;
    float pib_capita2;
    float super_poder2;

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

    super_poder = (float)populacao + area + pib + numeros_pontos_turisticos2 +
               pib_capita + 1 / densidade_populacional;

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

    super_poder2 = (float)populacao2 + area2 + pib2 + numeros_pontos_turisticos2 + pib_capita2 + 1 / densidade_populacional2;

    // Saída dos dados
    
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numeros_pontos_turisticos > numeros_pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional < densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_capita > pib_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder > super_poder2);
    
    return 0;
}
