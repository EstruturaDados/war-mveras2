// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
//                    MÓDULO - NOVATO
// ============================================================================
//
/*  - Criar uma `struct` chamada `Territorio`.
    - Usar um **vetor estático de 5 elementos** para armazenar os territórios.
    - Cadastrar os dados de cada território: **Nome**, **Cor do Exército**, 
    e **Número de Tropas**.
    - Exibir o estado atual do mapa.

    ### ⚙️ Funcionalidades

    - Leitura de dados pelo terminal (`fgets` e `scanf`)
    - Impressão organizada dos dados de todos os territórios
*/
// ============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --- Constantes Globais  ---
#define TAM_STRING 50
#define NUM_TERRITORIO 5

// --- Definição da Estrutura (struct)
struct Territorio {
        int TERRITORIO;
        char NOME[TAM_STRING];
        char COR[TAM_STRING];
        char TROPAS[TAM_STRING];
        char MAPA[TAM_STRING];
};

// --- Função para limpar o buffer de entrada ---
void limpaBufferEntrada() {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
        struct Territorio biblioteca[NUM_TERRITORIO];
        int totalterritorio = 0;
        int opcao;

//totalterritorio = 1;
//printf("territorio = %d\n", totalterritorio);


return 0;
}   