using namespace std;
#define MAX 30

void pets(){
    //REALIZA A ADMINISTRACAO DOS PETS

    int op;
    char nome[MAX];
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
