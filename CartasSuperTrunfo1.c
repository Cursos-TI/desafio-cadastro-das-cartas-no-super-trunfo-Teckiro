#include <stdio.h>

int main(){
    
    // Carta 1

    char estado1;
    char codigo1[5];
    char nome_cidade[20];             //Nome da cidade
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos;                //Número de pontos turísticos



    //Código da carta 1


    printf("Digite a letra do estado (A-H):\n");
    scanf("%c", &estado1);
    printf("Digite o código da carta:\n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade);
    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    printf("Digite a área:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);

    printf("Carta 1!\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    
    
    
    // Carta 2

    char estado2;
    char codigo2[5];
    char nome_cidade2[20];             //Nome da cidade
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;                //Número de pontos turísticos



    //Código da carta 2


    printf("Digite a letra do estado (A-H):\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta:\n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade2);
    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    printf("Digite a área:\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    printf("Carta 2!\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);



    return 0;

}
