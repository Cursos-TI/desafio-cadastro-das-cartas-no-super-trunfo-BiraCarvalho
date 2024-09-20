#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char Codigo[4];
    int Populacao;
    double Area;
    double Pib;
    int NumeroDePontosTuristicos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("informe Código da cidade:");
    scanf("%s", Codigo);

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
    printf(
        "Codigo                      : %s\n"
        "Populacao                   : %d \n"
        "Area                        : %.2lf\n"
        "PIB                         : %.2lf\n"
        "Número de Pontos Turísticos : %d\n"
    , Codigo, Populacao, Area, Pib, NumeroDePontosTuristicos);
    printf("--------------------------------------\n");

    return 0;
}
