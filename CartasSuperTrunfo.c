#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char Id[4];
    char Estado[2];
    char Nome[20];
    int Populacao;
    double Area;
    double Pib;
    int NumeroDePontosTuristicos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("informe Id da cidade:");
    scanf("%4s", Id);

    printf("informe Estado onde fica a cidade:");
    scanf("%2s", Estado);

    printf("informe o nome da cidade:");
    scanf("%20s", Nome);

    printf("informe a População da cidade:");
    scanf("%d", &Populacao);

    printf("informe a Área da cidade:");
    scanf("%lf", &Area);

    printf("informe o PIB da cidade:");
    scanf("%lf", &Pib);

    printf("informe a Número de Pontos Turísticos da cidade:");
    scanf("%d", &NumeroDePontosTuristicos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("--------------------------------------\n");
    printf("Id                          : %s\n",    Id);
    printf("Estado                      : %s\n",    Estado);
    printf("Nome                        : %s\n",    Nome);
    printf("Populacao                   : %d \n",   Populacao);
    printf("Area                        : %.2lf\n", Area);
    printf("PIB                         : %.2lf\n", Pib);
    printf("Número de Pontos Turísticos : %d\n",    NumeroDePontosTuristicos);
    printf("--------------------------------------\n");

    return 0;
}
