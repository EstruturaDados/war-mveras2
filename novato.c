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
        int TROPAS;
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
// Programa Principal
// Cadastra os detalhes de cada Exército

//////////////////////////////////////////////////
        do{

            //Exibe o menu de opções.
            printf("=============================\n");
            printf("    LISTA DE EXERCITO        \n");
            printf("=============================\n");
            printf("1 - CADASTRAR NOVO EXERCITO  \n");
            printf("2 - LISTAR TODOS OS EXERCITOS\n");
            printf("0 - SAIR                     \n");

            // Lê a opção do usuário.
            scanf("%d", &opcao);
            limpaBufferEntrada(); //Limpa algum comando inválido deixado pelo scanf.

            // --- Processamento da Opção ---

            switch (opcao) {
                    case 1: // CADASTRO DO EXÉRCITO
                        printf("--- Cadastro de Novo Exrcito ---\n\n");

                        if (totalterritorio < NUM_TERRITORIO) {
                            printf("Digite o nome do exercito: ");
                            fgets(biblioteca[totalterritorio].NOME, TAM_STRING, stdin);

                            printf("Digite a cor do exercito: ");
                            fgets(biblioteca[totalterritorio].COR, TAM_STRING, stdin);

                            printf("Digite o mapa onde o exercito será inserido: ");
                            fgets(biblioteca[totalterritorio].MAPA, TAM_STRING, stdin);

                            biblioteca[totalterritorio].NOME[strcspn(biblioteca[totalterritorio].NOME, "\n")] = 0; // Remove o caractere de nova linha
                            biblioteca[totalterritorio].COR[strcspn(biblioteca[totalterritorio].COR, "\n")] = 0;
                            biblioteca[totalterritorio].MAPA[strcspn(biblioteca[totalterritorio].MAPA, "\n")] = 0;

                            printf("Digite o numero de tropas: ");
                            scanf("%d", &biblioteca[totalterritorio].TROPAS);
                            limpaBufferEntrada(); //Limpa algum comando inválido deixado pelo scanf.

                            totalterritorio++;
                            printf("Exército cadastrado com sucesso!\n");     
                        } else {
                            printf("Biblioteca cheia! Não é possível cadastrar mais Exércitos.\n");
                        }
                        break;

                    case 2: // LISTAGEM DE LIVROS
                        printf("--- Lista de Exércitos Cadastrados ---\n\n");

                        if (totalterritorio == 0) {
                            printf("Nenhum exército cadastrado.\n");
                        } else {
                            for (int i = 0; i < totalterritorio; i++) {
                                printf("-----------------------------\n");
                                printf("Exército %d:\n", i + 1);
                                printf("Nome: %s\n", biblioteca[i].NOME);
                                printf("Cor: %s\n", biblioteca[i].COR);
                                printf("Tropas: %d\n", biblioteca[i].TROPAS);
                                printf("Mapa: %s\n", biblioteca[i].MAPA);
                            }
                             printf("-----------------------------\n");
                        }

                        // A pausa é crucial para que o usuário veja a lista antes
                        // do próximo loo limpar a tela.
                        printf("\nPressione Enter para continuar...");
                        getchar();
                        break;    
                    
                    case 0: // SAIR
                        printf("\nSaindo do sistema...");
                        break;

                    default: //OPÇÃO INVÁLIDA
                        printf("Opção inválida! Tente novamente.\n");
                        printf("\nPressione Enter para continuar...");
                        getchar();
                        break;
            }

        } while (opcao != 0);

//////////////////////////////////////////////////



//printf("ola mundo!\n");
return 0;
}   