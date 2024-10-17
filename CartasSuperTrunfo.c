#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char estado[100]; // Alterado para string
    char codigoEstado[100];
    char nomeCidade[100];
    char escolha;
    int populacao, pontoTurisitco;
    float area, pib;

    do {
        printf("Nome do Estado: ");
        scanf("%s", estado);
        while (getchar() != '\n'); // Limpar o buffer corretamente
        
        printf("O código do estado: ");
        scanf("%s", codigoEstado);
        while (getchar() != '\n');
        
        printf("O nome da cidade: ");
        scanf("%s", nomeCidade);
        while (getchar() != '\n');
        
        printf("A população total: ");
        scanf("%d", &populacao);
        while (getchar() != '\n');
        
        printf("A quantidade de pontos turísticos: ");
        scanf("%d", &pontoTurisitco);
        while (getchar() != '\n');
        
        printf("A área da cidade: ");
        scanf("%f", &area);
        while (getchar() != '\n');
        
        printf("Por último, o PIB: ");
        scanf("%f", &pib);
        while (getchar() != '\n');

        printf("\nTodas as informações:\n");
        printf("O nome do estado: %s\n", estado);
        printf("O código do estado: %s\n", codigoEstado);
        printf("O nome da cidade: %s\n", nomeCidade);
        printf("A quantidade da população: %d\n", populacao);
        printf("A quantidade de pontos turísticos: %d\n", pontoTurisitco);
        printf("A área total: %.1f\n", area);
        printf("O PIB: %.1f\n", pib);

        printf("\nInformações corretas? (Y/N): ");
        scanf("%c", &escolha); // Alteração: adicionar o & na variável escolha
        while (getchar() != '\n'); // Limpar o buffer após a leitura

        if (escolha == 'Y' || escolha == 'y') {
            return 0;
        }
    } while (1);

    return 0;
}
