#include <stdio.h>

int main() {
     
    unsigned long int populacao1, populacao2;
    int turismo1, turismo2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pibcapita1, pibcapita2, superpoder ;
    char nome1[50], estado1[50], codigo1[50];
    char nome2[50], estado2[50], codigo2[50];


    
    // Cadastro das Cartas:
 
    
    //Dados da primeira carta
    printf("Digite o Estado: \n");
    scanf("%s", estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &turismo1);


    //Dados da segunda carta

    printf("\nDigite o Estado da segunda cidade: \n");
    scanf("%s", estado2);

    printf("Digite o Codigo: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao2);sprintf

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &turismo2);

    //calculando a densidade populacional 

    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    //calculando PIB per capita

    pibcapita1 = pib1 / populacao1;
    pibcapita2 = pib2 / populacao2;

    
    // Exibição dos Dados das Cartas:
  
    printf("\n=== Dados da Primeira Cidade ===\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nome1);
    printf("Numero de habitantes: %d \n", populacao1);
    printf("Area da cidade: %.2f km²\n", area1);
    printf("PIB da cidade: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turismo1);
    printf("Densidade populacional: %.2f\n", densidade1 );
    printf("PIB per capita: %.2f \n", pibcapita1);

    printf("\n=== Dados da Segunda Cidade ===\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("Numero de habitantes: %d \n", populacao2);
    printf("Area da cidade: %.2f km²\n", area2);
    printf("PIB da cidade: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f\n", densidade2 );
    printf("PIB per capita: %.2f \n", pibcapita2);

        //Comparação das cartas
    printf("Comparação de cartas (Atributo: População)\n");

    printf("Carta 1 - %s : %d\n", nome1, populacao1);
    printf("Carta 2 - %s : %d \n", nome2, populacao2);

    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }



    return 0;
}