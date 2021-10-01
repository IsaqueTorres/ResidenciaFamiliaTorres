#include <stdio.h>
#include <stdlib.h>
#define MAX 30

int op;
char nome[MAX];


int gerenciaMorador(){

    do{
    system("clear");
    printf("...::: GERENCIA MORADOR:::...");
    printf("\n [1] - Cadastrar novo morador");
    printf("\n [2] - Excluir morador");
    printf("\n [3] - Gerenciar permissoes de morador");
    printf("\n [4] - Listar todos os moradores");
    printf("\n [0] - Voltar");
    printf("\n\n");
    printf("Escolha sua opcao - > ");
    scanf("%i", &op);

    switch (op){
    case 1:
        printf("\n Insira o nome do morador");
        scanf("%s", &nome);
    break;
    case 2:
        printf("\n Insira o nome do morador que deseja excluir");
    break;
    case 3:
        printf("\n Gerenciar permissoes");
    break;
    default:
        printf("\n Opcao invalida, digite outro numero");
    }

    } while (op != 0);
}
int gerenciaVisitante(){

    do{
    system("clear");
    printf("...::: GERENCIA VISITANTE:::...");
    printf("\n [1] - Cadastrar novo visitante");
    printf("\n [2] - Excluir visitante");
    printf("\n [3] - Exibir lista de visitantes");
    printf("\n [4] - Gerenciar permissoes do visitante");
    printf("\n [0] - Voltar");
    printf("\n\n");
    printf("Escolha sua opcao: - > ");
    scanf("%i", &op);

    switch (op){
    case 1:
        printf("\n Insira o nome do Visitante");
        scanf("%s", &nome);
    break;
    case 2:
        printf("\n Insira o nome do visitante que deseja excluir");
    break;
    case 3:
        printf("\n Listar visitantes aqui...");
    break;
    case 4:
        printf("\n Gerenciar permissoes");
    break;
    default:
        printf("\n Opcao invalida, digite outro numero");
    }

    }while (op != 0);
}
int gerenciaPermissao(){

    system("clear");
    printf("...::: GERENCIA PERMISSOES:::...");
    printf("\n [1] - Niveis de Acesso");
    printf("\n [2] - Voltar");
    printf("\n\n");
    printf("Escolha sua opcao: - > ");
    scanf("%i", &op);

}
int pesquisa(){

    do{
    system("clear");
    printf("...::: PESQUISA :::...");
    printf("\n[1] - Listar todos Moradores");
    printf("\n[2] - Listar todos Visitantes");
    printf("\n[2] - Listar todos Pets");
    printf("\n[0] - Voltar");
    printf("\n\n");
    printf("Escolha sua opcao: - > ");
    scanf("%i", &op);

    switch (op){
    case 1:
        printf("\n Listar moradores aqui...");
    break;
    case 2:
        printf("\n Listar visitantes aqui...");
    break;
    case 3:
       printf("\n Listar pets aqui...");
    break;
    default:
        printf("\n Opcao invalida, digite outro numero");
    }

    }while (op != 0);
}
int cftv(){
    system("clear");
    printf("...:::CFTV:::...");
    printf("\n[1] - Status");
    printf("\n[2] - Reiniciar");
    printf("\nEscolha sua opcao -> ");
    scanf("%i", &op);
}
int veiculos(){
    system("clear");
    printf("...:::VEICULOS:::...");
    printf("\n [1] - Cadastrar veiculo");
    printf("\n [2] - Remover veículo");
    printf("\n [3] - Listar veiculos");
    printf("\n [4] - Voltar");
    printf("\n Escolha sua opcao -> ");
    scanf("%i", &op);
}
int pets(){
char nomePet[MAX];
char tipoPet[MAX];
char sexoPet;
char caracteristicaPet [MAX];

    do{
    system("clear");
    printf("...:::PETS:::...");
    printf("\n [1] - Cadastrar Pets");
    printf("\n [2] - Remover Pets");
    printf("\n [3] - Listar Pets");
    printf("\n [4] - Voltar");
    printf("\nEscolha sua opcao -> ");
    scanf("%i", &op);

    switch (op){
    case 1:
        printf("\n Insira o nome do PET");
        scanf("%s", &nomePet);
        printf("\n Insira o tipo de PET (ex: cachorro, gato, cobra,etc...)");
        scanf("%s", &tipoPet);
        printf("\n Insira o sexo do PET");
        scanf("%c", &sexoPet);
        printf("\n Insira uma caracteristica para identificacao do PET:");
        scanf("%c", &caracteristicaPet);

    break;
    case 2:
        printf("\n Insira o nome do morador que deseja excluir");
    break;
    case 3:
        printf("\n Gerenciar permissoes");
    break;
    default:
        printf("\n Opcao invalida, digite outro numero");
    }

    } while (op != 0);
}
int defesa(){

    do{
    system("clear");
    printf("...::: DEFESA:::...");
    printf("\n [1] - Modo Viagem");
    printf("\n [2] - Modo noite");
    printf("\n [0] - Voltar");
    printf("\nEscolha sua opcao -> ");
    scanf("%i", &op);

    switch (op){
    case 1:
        printf("\n Modo viagem ativado com sucesso...");
    break;
    case 2:
        printf("\n Modo noite ativado com sucesso...");
    break;
    default:
        printf("\n Opcao invalida, digite outro numero");
    }

    } while (op != 0);
}
int recursos(){
    system("clear");
    printf("...::: RECURSOS:::...");
    printf("\n [1] - Niveis Reservatorio agua da chuva");
    printf("\n [2] - Temperatura da casa");
    printf("\n [3] - Analítico Horta");
    printf("\n [4] - Analítico Peixes");
    printf("Escolha sua opcao -> ");
    scanf("%i", &op);

}
int main(void){

    int opcao;

    do{
        system("clear");
        printf("\n DIGITO       ACAO");
        printf("\n [1] - Gerenciar morador");
        printf("\n [2] - Gerenciar Visitantes");
        printf("\n [3] - Pesquisar Elementos");
        printf("\n [4] - Veiculos");
        printf("\n [5] - Pets");
        printf("\n [6] - CFTV");
        printf("\n [7] - Defesa");
        printf("\n [8] - Recursos");
        printf("\n [0] - Sair do Programa");
        printf("\n\n");

        printf("Escolha sua opcao: ");
        scanf("%i", &opcao);

        if(opcao == 1){
            gerenciaMorador();
        }else if(opcao == 2){
            gerenciaVisitante();
        }else if(opcao == 3){
            pesquisa();
        }else if(opcao == 4){
            veiculos();
        }else if(opcao == 5){
            pets();
        }else if(opcao == 6){
            cftv();
        }else if(opcao == 7){
            defesa();
        }else if(opcao == 8){
            recursos();
        }else if (opcao == 0){
            system("clear");
            printf("OBRIGADO!!!");
            printf("\n\n");
            break;
        }
        else
            printf("\n Opcao invalida, tente novamente...");

        system("break");
    } while(opcao != 0);
}















