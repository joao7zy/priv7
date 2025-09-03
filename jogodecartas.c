#include <stdio.h>

int main() {
    // Variáveis para armazenar atributos
    int carta1_forca, carta1_velocidade, carta1_inteligencia;
    int carta2_forca, carta2_velocidade, carta2_inteligencia;
    int escolha;

    printf(" SUPER TRUNFO \n");

    // Cadastro da carta 1
    printf("\n Cadastro da Carta 1 \n");
    printf("Digite a FORCA: ");
    scanf("%d", &carta1_forca);
    printf("Digite a VELOCIDADE: ");
    scanf("%d", &carta1_velocidade);
    printf("Digite a INTELIGENCIA: ");
    scanf("%d", &carta1_inteligencia);

    // Cadastro da carta 2
    printf("\n Cadastro da Carta 2 \n");
    printf("Digite a FORCA: ");
    scanf("%d", &carta2_forca);
    printf("Digite a VELOCIDADE: ");
    scanf("%d", &carta2_velocidade);
    printf("Digite a INTELIGENCIA: ");
    scanf("%d", &carta2_inteligencia);

    // Menu para escolha de atributo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Forca\n");
    printf("2 - Velocidade\n");
    printf("3 - Inteligencia\n");
    printf("4 - Forca + Velocidade (media)\n");
    printf("5 - Velocidade + Inteligencia (media)\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("\nComparando FORCA...\n");
            if (carta1_forca > carta2_forca)
                printf("Carta 1 venceu! (%d > %d)\n", carta1_forca, carta2_forca);
            else if (carta1_forca < carta2_forca)
                printf("Carta 2 venceu! (%d > %d)\n", carta2_forca, carta1_forca);
            else
                printf("Empate! Ambas tem %d de forca.\n", carta1_forca);
            break;

        case 2:
            printf("\nComparando VELOCIDADE...\n");
            if (carta1_velocidade > carta2_velocidade)
                printf("Carta 1 venceu! (%d > %d)\n", carta1_velocidade, carta2_velocidade);
            else if (carta1_velocidade < carta2_velocidade)
                printf("Carta 2 venceu! (%d > %d)\n", carta2_velocidade, carta1_velocidade);
            else
                printf("Empate! Ambas tem %d de velocidade.\n", carta1_velocidade);
            break;

        case 3:
            printf("\nComparando INTELIGENCIA...\n");
            if (carta1_inteligencia > carta2_inteligencia)
                printf("Carta 1 venceu! (%d > %d)\n", carta1_inteligencia, carta2_inteligencia);
            else if (carta1_inteligencia < carta2_inteligencia)
                printf("Carta 2 venceu! (%d > %d)\n", carta2_inteligencia, carta1_inteligencia);
            else
                printf("Empate! Ambas tem %d de inteligencia.\n", carta1_inteligencia);
            break;

        case 4: {
            printf("\nComparando FORCA + VELOCIDADE (media)...\n");
            float media1 = (carta1_forca + carta1_velocidade) / 2.0;
            float media2 = (carta2_forca + carta2_velocidade) / 2.0;

            (media1 > media2) ? printf("Carta 1 venceu! (%.1f > %.1f)\n", media1, media2)
            : (media1 < media2) ? printf("Carta 2 venceu! (%.1f > %.1f)\n", media2, media1)
            : printf("Empate! Ambas tem media %.1f.\n", media1);
            break;
        }

        case 5: {
            printf("\nComparando VELOCIDADE + INTELIGENCIA (media)...\n");
            float media1 = (carta1_velocidade + carta1_inteligencia) / 2.0;
            float media2 = (carta2_velocidade + carta2_inteligencia) / 2.0;

            (media1 > media2) ? printf("Carta 1 venceu! (%.1f > %.1f)\n", media1, media2)
            : (media1 < media2) ? printf("Carta 2 venceu! (%.1f > %.1f)\n", media2, media1)
            : printf("Empate! Ambas tem media %.1f.\n", media1);
            break;
        }

        default:
            printf("Opcao invalida!\n");
            break;
    }

    printf("\nO jogo acabou, Parabens ao vencedor!\n");
    return 0;
}
