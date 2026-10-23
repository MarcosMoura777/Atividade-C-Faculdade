
#include <stdio.h>

int main() {
    float nota, soma = 0, media;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Digite a nota do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);

        while (nota < 0 || nota > 10) {
            printf("Nota invalida! Digite uma nota de 0 a 10: ");
            scanf("%f", &nota);
        }

        soma = soma + nota;
    }

    media = soma / 10;

    printf("\nMedia geral: %.2f\n", media);

    if (media < 7) {
        printf("ALERTA: A media de atendimento esta baixa!\n");
    } else {
        printf("A media de atendimento esta boa.\n");
    }

    return 0;
}
