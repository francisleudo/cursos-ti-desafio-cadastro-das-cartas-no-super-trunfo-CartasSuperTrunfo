#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
 
    //Variáveis Carta 1
    int populacao1;
    float area1;
    float PIB1;
    int numero_de_ponto_turisticos1;

    //Variáveis Carta 2
    int populacao2;
    float area2;
    float PIB2;
    int numero_de_ponto_turisticos2;

    //Captura e armazena os dados da Carta 1
    printf("Vamos cadastrar a primeira carta!\n");
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);
    printf("Digite o numero de ponto turístico: \n");
    scanf("%d", &numero_de_ponto_turisticos1);

    //Captura e armazena os dados da Carta 2
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

    //Exibe as informações da Carta 2
    printf("Carta 2\n");
    printf("População: %d\n", populacao2);
    printf("População: %f\n", area2);
    printf("População: %f\n", PIB2);
    printf("População: %d\n", numero_de_ponto_turisticos2);
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
