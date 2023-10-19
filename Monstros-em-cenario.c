// =-= // Includes // =-= //

#include <stdlib.h>
#include <stdio.h>

// =-= // Declacarao de Structs // =-= //

// Status de um Inimigo no Cenario
struct StatusInimigo
{
    char nome[15];
    int vida;

} Inimigo;

// Dano Aplicado a um Inimigo
struct DanoAplicado
{
    int dano;
} Dano;

// =-= // Declacarao de Funcoes // =-= //

int DanoDesferido(void);
int DanoSofrido(void);

// =-= // Funcao Principal // =-= //

int main(void)
{
    printf("Digite o nome do inimigo: ");
    scanf("%s", Inimigo.nome);

    printf("Digite a vida do inimigo: ");
    scanf("%d", &Inimigo.vida);

    DanoDesferido();
    DanoSofrido();

    printf("Vida atual de %s: %d\n", Inimigo.nome, Inimigo.vida);
    return EXIT_SUCCESS;
}

// =-=-=-=-=-=-= Funcao de Dano Desferido =-=-=-=-=-=-= //

int DanoDesferido(void)
{
    printf("\nDano recebido: ");
    scanf("%d", &Dano.dano);
    return Dano.dano;
}

// =-=-=-=-=-=-= Funcao de Dano Sofrido =-=-=-=-=-=-= //

int DanoSofrido(void)
{
    Inimigo.vida = Inimigo.vida - Dano.dano;
    return Inimigo.vida;
}
