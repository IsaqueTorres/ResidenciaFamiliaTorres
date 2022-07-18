#include <iostream>
#include <string>
using namespace std;
#define MAX 30

int op;
char nome[MAX];

//DECLARANDO AS FUNCOES DO PROGRAMA
void apresentacao();
void gerenciaMorador();
void gerenciaVisitante();
void gerenciaPermissao();
void pesquisa();
void cftv();
void veiculos();
void pets();
void defesa();
void recursos();
void copyrigths();
//FIM DAS FUNCOES DO PROGRAMA

int main(void){

    int opcao;

    do{
        apresentacao();
        cout <<"\n [1] - Gerenciar morador";
        cout <<"\n [2] - Gerenciar Visitantes";
        cout <<"\n [3] - Pesquisar Elementos";
        cout <<"\n [4] - Veiculos";
        cout <<"\n [5] - Pets";
        cout <<"\n [6] - CFTV";
        cout <<"\n [7] - Defesa";
        cout <<"\n [8] - Recursos";
        cout <<"\n [0] - Sair do Programa";
        cout <<"\n\n";

        cout <<"Escolha sua opcao: ";
        cin >> opcao;
        if(opcao == 1){
            gerenciaMorador();
        }
        else if(opcao == 2){
            gerenciaVisitante();
        }
        else if(opcao == 3){
            pesquisa();
        }
        else if(opcao == 4){
            veiculos();
        }
        else if(opcao == 5){
            pets();
        }
        else if(opcao == 6){
            cftv();
        }
        else if(opcao == 7){
            defesa();
        }
        else if(opcao == 8){
            recursos();
        }
        else if (opcao == 0){
            system("clear");
            copyrigths();
            break;
        }
        else
            cout << "\n Opcao invalida, tente novamente...";

        system("break");
    }
    while(opcao != 0);
}


//FUNCOES AUXILIARES DO PROGAMA

void apresentacao(){
    //TELA DE LOGO DO PROGRAMA
    cout<<"**********************************";
    cout<<"*     ...::: Bem vindo:::...     *";
    cout<<"*                                *";
    cout<<"* Data dd/mm/aaaa                *";
    cout<<"* Hora                           *";
    cout<<"*                                *";
    cout<<"*                                *";
    cout<<"*                                *";
    cout<<"*                                *";
    cout<<"*                                *";
    cout<<"**********************************";
}
void gerenciaMorador(){
    //REALIZA A ADMINISTRACAO DE MORADORES DA RESIDENCIA
    do{
        system("clear");
        cout<<"...::: GERENCIA MORADOR:::...";
        cout<<"\n [1] - Cadastrar novo morador";
        cout<<"\n [2] - Excluir morador";
        cout<<"\n [3] - Gerenciar permissoes de morador";
        cout<<"\n [4] - Listar todos os moradores";
        cout<<"\n [0] - Voltar";
        cout<<"\n\n";
        cout<<"Escolha sua opcao - > ";
        cin>>op;

        switch (op){
        case 1:
            cout<<"\n Insira o nome do morador: ";
            cin >> nome;
            break;
        case 2:
            cout<<"\n Insira o nome do morador que deseja excluir: ";
            cin >> nome;
            break;
        case 3:
            cout<<"\n Morador : Fulano\n Permissao: Administrador\n";
            getchar();
            break;
        case 4:
            cout<<"\nMorador 01\n Nome: Isaque\n Idade: 24 Anos\n";
            cout<<"\nMorador 02\n Nome: Bianka\n Idade: 20 Anos\n";
            break;
        default:
            cout<<"\n Opcao invalida, digite outro numero";
        }
    }
    while (op != 0);
}
void gerenciaVisitante(){
    //REALIZA A ADMINISTRACAO DE VISITANTES DA RESIDENCIA

    do{
        system("clear");
        cout<<"...::: GERENCIA VISITANTE:::...";
        cout<<"\n [1] - Cadastrar novo visitante";
        cout<<"\n [2] - Excluir visitante";
        cout<<"\n [3] - Exibir lista de visitantes";
        cout<<"\n [4] - Gerenciar permissoes do visitante";
        cout<<"\n [0] - Voltar\n\n";

        cout<<"Escolha sua opcao: - > ";
        cin >> op;

        switch (op){
        case 1:
            cout<<"\n Insira o nome do Visitante";
            cin >> nome;
            break;
        case 2:
            cout<<"\n Insira o nome do visitante que deseja excluir";
            break;
        case 3:
             cout<<"\n Listar visitantes aqui...";
            break;
        case 4:
            cout<<"\n Gerenciar permissoes";
            break;
        default:
            cout<<"\n Opcao invalida, digite outro numero";
        }

    }
    while (op != 0);
}
void gerenciaPermissao(){
    //REALIZA A ADMINISTRACAO DE PESMISSOES DE ACESSO

    system("clear");
    cout<<"...::: GERENCIA PERMISSOES:::...";
    cout<<"\n [1] - Niveis de Acesso";
    cout<<"\n [2] - Voltar";
    cout<<"\n\n";
    cout<<"Escolha sua opcao: - > ";
    cin >> op;
}
void pesquisa(){

    do{
        system("clear");
        cout<<"...::: PESQUISA :::...";
        cout<<"\n[1] - Listar todos Moradores";
        cout<<"\n[2] - Listar todos Visitantes";
        cout<<"\n[2] - Listar todos Pets";
        cout<<"\n[0] - Voltar";
        cout<<"\n\n";
        cout<<"Escolha sua opcao: - > ";
        cin >> op;

        switch (op){
        case 1:
            cout<<"\n Listar moradores aqui...";
            break;
        case 2:
            cout<<"\n Listar visitantes aqui...";
            break;
        case 3:
            cout<<"\n Listar pets aqui...";
            break;
        default:
            cout<<"\n Opcao invalida, digite outro numero";
        }

    }while (op != 0);
}
void cftv(){
    //REALIZA A ADMINISTRACAO DO SISTEMA DE CFTV (CIRCUITO FECHADO DE TELE VISAO) DA RESIDENCIA.

    system("clear");
    cout<<"...:::CFTV:::...";
    cout<<"\n[1] - Status";
    cout<<"\n[2] - Reiniciar";
    cout<<"\nEscolha sua opcao -> ";
    cin>>op;
}
void veiculos(){
    //REALIZA A ADMINISTRACAO DE ACESSO E CADASTRO DE VEICULOS

    system("clear");
    cout<<"...:::VEICULOS:::...";
    cout<<"\n [1] - Cadastrar veiculo";
    cout<<"\n [2] - Remover veículo";
    cout<<"\n [3] - Listar veiculos";
    cout<<"\n [4] - Voltar";
    cout<<"\n Escolha sua opcao -> ";
    cin>>op;
}
void pets(){
    //REALIZA A ADMINISTRACAO DOS PETS

    char nomePet[MAX];
    char tipoPet[MAX];
    char sexoPet;
    char caracteristicaPet [MAX];

    do{
        system("clear");
        cout<<"...:::PETS:::...";
        cout<<"\n [1] - Cadastrar Pets";
        cout<<"\n [2] - Remover Pets";
        cout<<"\n [3] - Listar Pets";
        cout<<"\n [4] - Voltar";
        cout<<"\nEscolha sua opcao -> ";
        cin >> op;

        switch (op){
        case 1:
            cout<<"\n Insira o nome do PET";
            cin >> nomePet;
            cout<<"\n Insira o tipo de PET (ex: cachorro, gato, cobra,etc...)";
            cin >> tipoPet;
            cout<<"\n Insira o sexo do PET";
            cin >> sexoPet;
            cout<<"\n Insira uma caracteristica para identificacao do PET:";
            cin >> caracteristicaPet;
        break;
        case 2:
            cout<<"\n Excluir PET";
            break;
        case 3:
            cout<<"\n Listar PET'S";
            break;
        default:
            cout<<"\n Opcao invalida, digite outro numero";
        }
    }while (op != 0);
}
void defesa(){
    //REALIZA A GERENCIA DE MODOS DE DEFESA DA RESIDENCIA

    do{
        system("clear");
        cout<<"...::: DEFESA:::...";
        cout<<"\n [1] - Modo Viagem";
        cout<<"\n [2] - Modo Noturno";
        cout<<"\n [3] - Modo Diurno";
        cout<<"\n [4] - Modo Manutencao";
        cout<<"\n [5] - Teste de Alarmes ";
        cout<<"\n [0] - Voltar";
        cout<<"\nEscolha sua opcao -> ";
        cin >> op;

        switch (op){
        case 1:
            cout<<"\n Modo viagem ativado com sucesso...";
            break;
        case 2:
            cout<<"\n Modo noite ativado com sucesso...";
            break;
        case 3:
            cout<<"\n Modo diurno ativado com sucesso...";
            break;
        case 4:
            cout<<"\n Modo manutencao ativado com sucesso...";
            break;
        default:
            cout<<"\n Opcao invalida, digite outro numero";
        }
    }while (op != 0);
}
void recursos(){
    //REALIZA A GERENCIA DE TODOS OS RECURSOS EM COMUM DA RESIDENCIA, BEM COMO INSUMOS, ENERGIA, AGUA, CISTERNAS, BATERIAS E ETC

    do{
    cout<<"...::: RECURSOS:::...";
    cout<<"\n [1] - Temperatura da Casa";
    cout<<"\n [2] - Níveis dos resevadorios";
    cout<<"\n [3] - Banco de Baterias";
    cout<<"\n [4] - Recurso 4";
    cout<<"\n Escolha sua opcao ->";
    cin >> op;

        switch (op){
            case 1:
                cout<<"\n Cozinha/Sala de Estar: 26C";
                cout<<"\n Quarto Casal : 17C";
                cout<<"\n Oficina: 33C";
                cout<<"\n Area externa: 36C";
            break;
            case 2:
                cout<<"\n Reservatorio Água 1:              30%%";
                cout<<"\n Reservatorio Água 2:              100%%";
                cout<<"\n Reservatorio Diesel:              100%%";
                cout<<"\n Reservatorio Gasolina:            100%%";
                        break;
            case 3:
                cout<<"\nInformacoes da horta:";
            break;
            case 4:
                cout<<"\Informacoes dos peixes: ;;;";
            break;
            case 5:
                cout<<"\n Central de Alarmes:   100%% - Carregando...";
                cout<<"\n Horta:                100%% - Carregando...";
                cout<<"\n Peixes:               100%% - Carregando...";
                cout<<"\n Painel Solar:         100%% - Carregando...";
                cout<<"\n Cerca Eletrica:       100%% - Carregando...";
                cout<<"\n CFTV:                 !00%% - Carregando...";
                cout<<"\n Sensor de movimento:  100%% - Carregando...";
            break;
            default:
                cout<<"\n Opcao invalida, selecione outra opcao";
        }
    }while(op != 0);
}
void copyrigths(){
    cout<<"\n\n *****************************";
    cout<<"\nAll rights reserved.\nAuthor: Isaque Torres 2022\nVersion: 1.0.1\ncontact: torresisaque@gmail.com";
    cout << "Obrigado!!!";
    cout<<"\n\n *****************************";
}
