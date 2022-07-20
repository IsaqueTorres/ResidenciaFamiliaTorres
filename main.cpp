#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "apresentacao.h"
#include "gerenciaMorador.h"
#include "gerenciaVisitante.h"
#include "gerenciaPermissao.h"
#include "pesquisa.h"
#include "cftv.h"
#include "veiculos.h"
#include "pets.h"
#include "defesa.h"
#include "recursos.h"
#include "copyrigths.h"

using namespace std;
#define MAX 30

int op;
char nome[MAX];

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







