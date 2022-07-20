using namespace std;
#define MAX 30

//REALIZA A ADMINISTRACAO DE VISITANTES DA RESIDENCIA

void gerenciaVisitante(){

    int op;
    char nome[MAX];
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
