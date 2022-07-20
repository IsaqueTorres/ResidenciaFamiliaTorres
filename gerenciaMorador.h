using namespace std;
#define MAX 30

void gerenciaMorador(){

    int op;
    char nome[MAX];
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
