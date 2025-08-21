#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Esse código cadastra 2 Cartas supertrunfo com as váriaveis população, área, pib e numero de ponto turistico

int main() {
 
    //Variáveis Carta 1
    int populacao1;
    float area1;
    float PIB1;
    int numero_de_ponto_turisticos1;
    float densidadepopulacional1;
    float PIBPERCAPITA1;

    //Variáveis Carta 2
    int populacao2;
    float area2;
    float PIB2;
    int numero_de_ponto_turisticos2;
    float densidadepopulacional2;
    float PIBPERCAPITA2;
    int super_poder1, super_poder2;

    //variaveis de resultado
    int populacaocarta, areacarta, PIBcarta, numero_de_ponto_turisticocarta, densidadepopulacionalcarta, PIBPERCAPITAcarta, superpodercarta;

    //Exibe a mensagem de cadastro da primeira carta Captura e armazena os dados da Carta 1
    printf("Vamos cadastrar a primeira carta!\n");
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);
    printf("Digite o numero de ponto turístico: \n");
    scanf("%d", &numero_de_ponto_turisticos1);

    //Exibe a mensagem de cadastro da primeira carta Captura e armazena os dados da Carta 2
    printf("Vamos cadastrar a segunda carta!\n");
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);
    printf("Digite o numero de ponto turístico: \n");
    scanf("%d", &numero_de_ponto_turisticos2);

    //Exibe as informações da Carta 1
    printf("Carta 1\n");
    printf("População: %d\n", populacao1);
    printf("População: %f\n", area1);
    printf("População: %f\n", PIB1);
    printf("População: %d\n", numero_de_ponto_turisticos1);
    //faz o calculo da Densidade Populacional dividindo a população por area = densidade populacional 
    //faz o calculo do PIB per capita / populacao = Pib per capita
    densidadepopulacional1 = (populacao1 / area1);
    PIBPERCAPITA1 = (PIB1 / populacao1);

    //Exibe a densidade populacional e o PIB per capita
    printf("Densidade Populacional: %.1f\n", densidadepopulacional1);
    printf("PIB per capita: %f\n", PIBPERCAPITA1);
    

    //Exibe as informações da Carta 2
    printf("Carta 2\n");
    printf("População: %d\n", populacao2);
    printf("População: %f\n", area2);
    printf("População: %f\n", PIB2);
    printf("População: %d\n", numero_de_ponto_turisticos2);
    //faz o calculo da Densidade Populacional com a formula população / area = Densidade populacional
    densidadepopulacional2 = (populacao2 / area2);
    //faz o calculo do PIB per capita com a formula pib1 / populacao1 = PIB per capita
    PIBPERCAPITA2 = (PIB2 / populacao2);

    //Exibe a densidade populacional e o PIB per capita
    printf("Densidade Populacional: %.1f\n", densidadepopulacional2);
    printf("PIB per capita: %f\n", PIBPERCAPITA2);
 
    //calculo de super super_poder1
    super_poder1 = populacao1 + area1 + PIB1 + numero_de_ponto_turisticos1 + densidadepopulacional1
    + PIBPERCAPITA1;
    //calculo de super super_poder1
    super_poder2 = populacao2 + area2 + PIB2 + numero_de_ponto_turisticos2 + densidadepopulacional2
    + PIBPERCAPITA2;
   
    //compara os valores e adiciona na variavel ...carta
    populacaocarta = populacao1 > populacao2;
    areacarta = area1 > area2;
    PIBcarta = PIB1 > PIB2;
    numero_de_ponto_turisticocarta = numero_de_ponto_turisticos1 > numero_de_ponto_turisticos2;
    densidadepopulacionalcarta = densidadepopulacional1 > densidadepopulacional2;
    PIBPERCAPITAcarta = PIBPERCAPITA1 > PIBPERCAPITA2;
    superpodercarta = super_poder1 > super_poder2;


    //comparação das cartas 1 para carta 1 venceu
    printf("População: A carta 1 venceu? %d\n", populacaocarta);
    printf("Área: A carta 1 venceu? %d\n", areacarta);
    printf("PIB: A carta 1 venceu? %d\n", PIBcarta);
    printf("Numero de ponto turistico: A carta 1 venceu? %d\n", numero_de_ponto_turisticocarta);
    printf("Densidade populacional: A carta 1 venceu? %d\n", densidadepopulacionalcarta);
    printf("PIB per capita: A carta 1 venceu? %d\n", PIBPERCAPITAcarta);
    printf("Super poder: A carta 1 venceu? %d\n", superpodercarta);


    return 0;
}
