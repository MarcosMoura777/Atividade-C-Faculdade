
#include <stdio.h>

int main() {
    int opcao;
    int total = 0;

    do {
        printf("\n--- COFRINHO DIGITAL ---\n");
        printf("1 - Adicionar R$ 0,50\n");
        printf("2 - Adicionar R$ 1,00\n");
        printf("3 - Adicionar R$ 2,00\n");
        printf("0 - Parar e ver o total\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            total = total + 50;
        } else if (opcao == 2) {
            total = total + 100;
        } else if (opcao == 3) {
            total = total + 200;
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("\nTotal acumulado: R$ %d,%02d\n",
           total / 100, total % 100);

    return 0;
}
