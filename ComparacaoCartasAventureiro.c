#include <stdio.h>

int main() {
    // Variáveis            
    char nome_pais[50];
    int populacao;
    float area;
    float pib;
    int numeros_pontos_turisticos;
    float densidade_populacional;

    char nome_pais2[50];
    int populacao2;
    float area2;
    float pib2;
    int numeros_pontos_turisticos2;
    float densidade_populacional2;

    //entrada de dados

    printf("Cadastro da primeira carta\n");

    printf("Digite o nome do país: ");
    fgets(nome_pais, 50, stdin);

    printf("Digite o número de habitantes dessa país:");
    scanf("%d", &populacao);

    printf("Digite a área em quilômetros quadrados (km²): "); 
    scanf("%f", &area);

    printf("Digite o PIB dessa país: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos desse país: ");
    scanf("%d", &numeros_pontos_turisticos);

    densidade_populacional = (float) (populacao / area);

    printf("Cadastro da segunda carta\n");

    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nome_pais2, 50, stdin);

    printf("Digite o número de habitantes desse país:");
    scanf("%d", &populacao2);

    printf("Digite a área em quilômetros quadrados (km²): "); 
    scanf("%f", &area2);

    printf("Digite o PIB desse país: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos desse país: ");
    scanf("%d", &numeros_pontos_turisticos2);

    densidade_populacional2 = (float) (populacao2 / area2);

    // escolha de comparação

    int opcao;

    printf("\n ---- Escolha uma opção para fazer a comparação ---- \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
     case 1: 
            printf("Comparação da População:\n");
            printf("%s: %d número de habitantes\n", nome_pais, populacao);
            printf("%s: %d número de habitantes\n", nome_pais2, populacao2);
            if (populacao > populacao2)
                printf("%s venceu!\n", nome_pais);
            else if (populacao2 > populacao)
                printf("%s venceu!\n", nome_pais2);
            else
                printf("Empate!\n");
            break;

        case 2: 
            printf("Comparação de  Área:\n");
            printf("%s: %.2f km²\n", nome_pais, area);
            printf("%s: %.2f km²\n", nome_pais2, area2);
            if (area > area2)
                printf("%s venceu!\n", nome_pais);
            else if (area2 > area)
                printf("%s venceu!\n", nome_pais2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparação do PIB:\n");
            printf("%s: %.2f\n", nome_pais, pib);
            printf("%s: %.2f\n", nome_pais2, pib2);
            if (pib > pib2) {
                printf("%s venceu!\n", nome_pais);
            }
            else if (pib2 > pib) {
                printf("%s venceu!\n", nome_pais2);
                }
            else {
                printf("Empate!\n");
            }
            break;

        case 4: 
            printf("Comparação de Pontos Turísticos:\n");
            printf("%s: %d pontos\n", nome_pais, numeros_pontos_turisticos);
            printf("%s: %d pontos\n", nome_pais2, numeros_pontos_turisticos2);
            if (numeros_pontos_turisticos > numeros_pontos_turisticos2) {
                printf("%s venceu!\n", nome_pais);
            }
            else if (numeros_pontos_turisticos2 > numeros_pontos_turisticos) {
                printf("%s venceu!\n", nome_pais2);
            }
            else {
                printf("Empate!\n");
            }
            break;

        case 5: 
            printf("Comparação da densidade populacional:\n");
            printf("%s: %.2f hab/km²\n", nome_pais, densidade_populacional);
            printf("%s: %.2f hab/km²\n", nome_pais2, densidade_populacional2);
            if (densidade_populacional < densidade_populacional2) {
                printf("%s venceu!\n", nome_pais);
            }
            else if (densidade_populacional2 < densidade_populacional) {
                printf("%s venceu!\n", nome_pais2);
            }
            else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }
}