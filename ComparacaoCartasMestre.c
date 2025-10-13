// Comparação de cartas Nível mestre
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    char nome_pais[7] = "Brasil";
    char nome_pais2[6] = "Chile";
    int primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;
    float soma1 = 0, soma2 = 0; 

    srand(time(0));
    int populacao, populacao2;
    int numeros_pontos_turisticos, numeros_pontos_turisticos2;
    float area, area2;
    float pib, pib2;
    float densidade_populacional, densidade_populacional2;
    float pib_capita, pib_capita2;

    populacao = rand() % 100 + 1;
    numeros_pontos_turisticos = rand() % 100 + 1;
    area = rand() % 100 + 1;
    pib = rand() % 100 + 1;
    densidade_populacional = rand() % 100 + 1;
    pib_capita = rand() % 100 + 1;

    populacao2 = rand() % 100 + 1;
    numeros_pontos_turisticos2 = rand() % 100 + 1;
    area2 = rand() % 100 + 1;
    pib2 = rand() % 100 + 1;
    densidade_populacional2 = rand() % 100 + 1;
    pib_capita2 = rand() % 100 + 1;

    //Primeiro atributo
    printf("\n ---- Bem vindo ao Jogo ---- \n");
    printf("Escolha o primeiro atributo:\n");
    printf(" 1 - População\n");
    printf(" 2 - Número de pontos turísticos\n");
    printf(" 3 - Área\n");
    printf(" 4 - PIB\n");
    printf(" 5 - Densidade populacional\n");
    printf(" 6 - PIB per capita\n\n");

    printf("Escolha a comparação:\n");
    scanf(" %d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
        case 1:
            printf("Você escolheu a opção %d - População\n", primeiroAtributo);
            resultado1 = populacao > populacao2 ? 1 : 0;
            soma1 = populacao;
            soma2 = populacao2;
            break;
        case 2:
            printf("Você escolheu a opção %d - Número de pontos turísticos\n", primeiroAtributo);
            resultado1 = numeros_pontos_turisticos > numeros_pontos_turisticos2 ? 1 : 0;
            soma1 = numeros_pontos_turisticos;
            soma2 = numeros_pontos_turisticos2;
            break;
        case 3:
            printf("Você escolheu a opção %d - Área\n", primeiroAtributo);
            resultado1 = area > area2 ? 1 : 0;
            soma1 = area;
            soma2 = area2;
            break;
        case 4:
            printf("Você escolheu a opção %d - PIB\n", primeiroAtributo);
            resultado1 = pib > pib2 ? 1 : 0;
            soma1 = pib;
            soma2 = pib2;
            break;
        case 5:
            printf("Você escolheu a opção %d - Densidade populacional\n", primeiroAtributo);
            resultado1 = densidade_populacional < densidade_populacional2 ? 1 : 0;
            soma1 = densidade_populacional;
            soma2 = densidade_populacional2;
            break;
        case 6:
            printf("Você escolheu a opção %d - PIB per capita\n", primeiroAtributo);
            resultado1 = pib_capita > pib_capita2 ? 1 : 0;
            soma1 = pib_capita;
            soma2 = pib_capita2;
            break;
        default:
            printf("Opção de jogo inválida");
            return 1;
    }

    //Segundo atributo
    printf("\nEscolha o segundo atributo:\n");
    printf("Atenção! Você deve escolher um atributo diferente do primeiro.\n");
    printf(" 1 - População\n");
    printf(" 2 - Número de pontos turísticos\n");
    printf(" 3 - Área\n");
    printf(" 4 - PIB\n");
    printf(" 5 - Densidade populacional\n");
    printf(" 6 - PIB per capita\n\n");

    printf("Escolha a comparação:\n");
    scanf(" %d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)  {
        printf("Você escolheu o mesmo atributo!\n");
        return 1;
    } else {
        switch (segundoAtributo)
        {
            case 1:
                printf("Você escolheu a opção %d - População\n", segundoAtributo);
                resultado2 = populacao > populacao2 ? 1 : 0;
                soma1 += populacao;
                soma2 += populacao2;
                break;
            case 2:
                printf("Você escolheu a opção %d - Número de pontos turísticos\n", segundoAtributo);
                resultado2 = numeros_pontos_turisticos > numeros_pontos_turisticos2 ? 1 : 0;
                soma1 += numeros_pontos_turisticos;
                soma2 += numeros_pontos_turisticos2;
                break;
            case 3:
                printf("Você escolheu a opção %d - Área\n", segundoAtributo);
                resultado2 = area > area2 ? 1 : 0;
                soma1 += area;
                soma2 += area2;
                break;
            case 4:
                printf("Você escolheu a opção %d - PIB\n", segundoAtributo);
                resultado2 = pib > pib2 ? 1 : 0;
                soma1 += pib;
                soma2 += pib2;
                break;
            case 5:
                printf("Você escolheu a opção %d - Densidade populacional\n", segundoAtributo);
                resultado2 = densidade_populacional < densidade_populacional2 ? 1 : 0;
                soma1 += densidade_populacional;
                soma2 += densidade_populacional2;
                break;
            case 6:
                printf("Você escolheu a opção %d - PIB per capita\n", segundoAtributo);
                resultado2 = pib_capita > pib_capita2 ? 1 : 0;
                soma1 += pib_capita;
                soma2 += pib_capita2;
                break;
            default:
                printf("Opção de jogo inválida");
                return 1;
        }
    }

    printf("\n---- Resultado ----\n");
    printf("%s - Soma dos atributos: %.2f\n", nome_pais, soma1);
    printf("%s - Soma dos atributos: %.2f\n", nome_pais2, soma2);

    if (soma1 > soma2)
        printf("O %s venceu!\n", nome_pais);
    else if (soma2 > soma1)
        printf("A %s venceu!\n", nome_pais2);
    else if (soma1 == soma2) {
        printf("Empate:\n");
    } else {
        printf("Perdeu\n");
    }
    return 0;
}
