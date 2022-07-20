using namespace std;
#define MAX 30

//REALIZA A GERENCIA DE TODOS OS RECURSOS EM COMUM DA RESIDENCIA, BEM COMO INSUMOS, ENERGIA, AGUA, CISTERNAS, BATERIAS E ETC

void recursos(){
    int op;
    char nome[MAX];

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
