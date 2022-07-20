using namespace std;
#define MAX 30

//REALIZA A GERENCIA DE MODOS DE DEFESA DA RESIDENCIA
void defesa(){

    int op;
    char nome[MAX];

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
