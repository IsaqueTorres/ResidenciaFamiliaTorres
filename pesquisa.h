using namespace std;
#define MAX 30

void pesquisa(){

    int op;
    char nome[MAX];
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
