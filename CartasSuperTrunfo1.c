#include <stdio.h>

int main(){
    
    // Carta 1

    char estado1;
    char codigo1[5];
    char nome_cidade[20];             //Nome da cidade
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos;           //Número de pontos turísticos
    float densidade_populacional;
    float PIB_percapita;
    float superPoder; //soma de população,area,PIB,PIB per capita e densidade populacional
    float densidade_inversa;
    unsigned long int resultado;
    unsigned long int resultado2;
    unsigned long int resultado3;
    unsigned long int resultado4;
    unsigned long int resultado5;
    unsigned long int resultado6;
    unsigned long int resultado7;             



    //Código da carta 1

    printf("Desafio Super Trunfo!\n");
    
    printf("Digite a letra do estado (A-H):\n");
    scanf("%c", &estado1);
    
    printf("Digite o código da carta:\n");
    scanf("%s", &codigo1);
   
    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade);
    
    printf("Digite a população:\n");
    scanf("%u", &populacao1);
    
    printf("Digite a área:\n");
    scanf("%f", &area1);
    
    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);
    
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);

    printf("Digite a densidade populacional:\n");
    scanf("%f", &densidade_populacional);

    printf("Digite o PIB per capita:\n");
    scanf("%f", &PIB_percapita);

    
    // Cálculo da densidade populacional
    densidade_populacional = populacao1 / area1;

    // Cálculo do PIB per capita
    PIB_percapita = PIB1 / populacao1;

    densidade_inversa = 1 / densidade_populacional;  //calcular a densidade populacional inversa

    //soma do super poder
    superPoder = (float)(populacao1 + area1 + PIB1 + pontos_turisticos + PIB_percapita + densidade_inversa);
    
    
    //exibir os dados da carta 1
    printf("Carta 1!\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %f\n", densidade_populacional);
    printf("PIB per capita: %f\n", PIB_percapita);
    printf("Densidade inversa: %f\n", densidade_inversa);
    printf("Super poder: %f\n", superPoder);
    printf("-------------------------------------------------------------------------\n");
    
    // Carta 2

    char estado2;
    char codigo2[5];
    char nome_cidade2[20];             //Nome da cidade
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;
    float densidade_populacional2;       //Número de pontos turísticos
    float PIB_percapita2;
    float superPoder2; //soma de população,area,PIB,PIB per capita e densidade populacional
    float densidade_inversa2;
    int opcao;              



    //Código da carta 2


    printf("Digite a letra do estado (A-H):\n");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta:\n");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade2);
    
    printf("Digite a população:\n");
    scanf("%u", &populacao2);
    
    printf("Digite a área:\n");
    scanf("%f", &area2);
    
    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);
    
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a densidade populacional:\n");
    scanf("%f", &densidade_populacional2);

    printf("Digite o PIB per capita:\n");
    scanf("%f", &PIB_percapita2);


    // Cálculo da densidade populacional da segunda carta
    densidade_populacional = populacao2 / area2;

    // Cálculo do PIB per capita da segunda carta
    PIB_percapita = PIB2 / populacao2;

    densidade_inversa2 = 1 / densidade_populacional;  //calcular a densidade populacional inversa

    //soma do super poder
    superPoder2 = (float)(populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_percapita2 + densidade_inversa2);

    printf("Qual comparação voce deseja fazer?: \n");
    printf("Populacao: \n");
    printf("Área: \n");
    printf("PIB: \n");
    printf("Pontos turísticos: \n");
    printf("Densidade Demográfica: \n");
    printf("Escolha:\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        if (populacao1 > populacao2){
            print("Carta 1 venceu!\n");
        }else{
            print("Carta 2 venceu!\n");
        }
        break;
        
    case 2:
        if (area1 > area2){
            print("Carta 1 venceu!\n");
        }else{
            print("Carta 2 venceu!\n");
        }
        break;

    case 3:
        if (PIB1 > PIB2){
            print("Carta 1 venceu!\n");
        }else{
            print("Carta 2 venceu!\n");
        }
        break;

    case 4:
        if (pontos_turisticos > pontos_turisticos2){
            print("Carta 1 venceu!\n");
        }else{
            print("Carta 2 venceu!\n");
        }
        break;

    case 5:
        if (densidade_inversa > densidade_inversa2){
            print("Carta 1 venceu!\n");
        }else{
            print("Carta 2 venceu!\n");
        }
        break;
    
    default:
    print("Valor inválido!");
        break;
    }


    printf("------------------------------------------------------------------\n");

    //exibir os dados da carta 2
    
    printf("Carta 2!\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %f\n", densidade_populacional2);
    printf("PIB per capita: %f\n", PIB_percapita2);
    printf("Densidade inversa: %f\n", densidade_inversa2);
    printf("Super poder: %f\n", superPoder2);



    //comparação das cartas 1 e 2
    printf("população1 > pupulação2: %lu\n", (int)populacao1 > populacao2);
    printf("area1 > area2: %lu\n", (int)area1 > area2);
    printf("PIB1 > PIB2: %lu\n", (int)PIB1 > PIB2);
    printf("Pontos turísticos1 > Pontos turísticos2: %lu\n", (int)pontos_turisticos > pontos_turisticos2);
    printf("Densidade Populacional1 > Densidade Populacional2: %lu\n", (int)populacao1 > pontos_turisticos2);
    printf("PIB per capita1 > PIB per capita2: %lu\n", (int)PIB_percapita > PIB2);
    printf("Densidade inversa1 > Densidade inversa2: %lu\n", (int)densidade_inversa > densidade_inversa2);
    printf("Super poder1 > Super poder2: %lu\n", (int)superPoder > superPoder2);

    
    //comparação do PIB1 e do PIB2
    printf("O maior PIB é: %f\n");
    
    




    return 0;

}

