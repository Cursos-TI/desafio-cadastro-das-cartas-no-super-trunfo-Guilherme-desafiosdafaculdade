#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super Trunfo");

    char Estado;
    char Codigo[20];
    char Cidade[50];
    int População;
    float Area;
    float PIB;
    int Pontos_turisticos;

    printf("Entre com o codígo da carta\n");
    scanf("  %c", &Codigo);

    printf("Entre com o Estado da carta\n");
    scanf("%c", &Estado);

    printf("entre com a cidade da carta\n");
    sacnf("%c", &Cidade);

    printf("entre com a população\n");
    scanf("%d", &População);

    printf("entre com  a área da cidade\n");
    scanf("%f", &Area);

    printf("Entre com o PIB\n");
    scanf("%f", &PIB);

    printf("entre com o numero de pontos turísticos\n");
    scanf("%d", &Pontos_turisticos);
    

    



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
