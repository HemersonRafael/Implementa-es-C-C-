/*
TRABALHO DA SEGUNDA UNIDADE DE LINGUAGEM DE PROGRAMAÇÃO - ECT2303

Problema do Caixeiro Viajante (PCV)

Participantes:

Nome: HEMERSON RAFAEL PEREIRA PONTES Matrícula: 20160106641 Turma: 02B

Nome: JOÃO LUCAS DE OLIVEIRA ARAUJO  Matrícula: 20160001748 Turma: 02A

*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#define CIDADES 10

using namespace std;

int Aleatorio(){

    int teste;

    do{

        teste = ( 2 + rand() % 10 );

    }while( teste > 10 );

    return teste;

}


bool BuscaValor(int v[CIDADES], int chave, int n){

    for( int i = 1 ; i < n ; i++ ){

            if( v[i] == chave ){

                    return true;
            }
    }

    return false;
}


void GeraSolucaoInicial( int v[CIDADES], int n ){

    int teste, cont = 1;

    do{
            teste = Aleatorio();

            if( false == BuscaValor( v, teste, n ) ){

                v[cont] = teste;

                cont++;

            }

    }while(cont<=n-1);

}


float CustoDaSolucao( int v[CIDADES], float b[CIDADES][CIDADES], int n ){

    float soma = 0;

    for( int i = 0 ; i < n-1 ; i++ ){

            soma = soma + b[v[i] - 1][v[i+1] - 1];

    }

    soma = soma + b[v[n-1] - 1][v[0] - 1];

    return soma;

}


void Movimento2Opt( int RA[CIDADES], int NR[CIDADES], int i, int k, int n ){

    for( int a = 1 ; a <= i-1 ; a++ ){

        NR[a] = RA[a];

    }

    int cont = i;

    for( int b = k ; b >= i ; b-- ){

        NR[cont++] = RA[b];

    }

    for( int c = k+1 ; c < n ; c++ ){

            NR[c] = RA[c];

    }

}



int main(){

    srand(1);

    float Distancias[CIDADES][CIDADES]={
                                            {0, 281, 20.9, 18.1, 29, 39.7, 273, 214, 187, 38.4},
                                            {281, 0,269, 263, 254, 255, 192, 73.7, 207, 286},
                                            {20.9, 269, 0, 24.5, 16.5, 40.6, 261, 201, 175, 19.6},
                                            {18.1, 263, 24.5, 0, 9.3, 21.5, 255, 196, 169, 42.2},
                                            {29, 254, 16.5, 9.3, 0, 30.8, 246, 187, 160, 33.4},
                                            {39.7, 255, 40.6, 21.5, 30.8, 0, 276, 188, 190, 63.4},
                                            {273, 192, 261, 255, 246, 276, 0, 135, 87.3, 277},
                                            {214, 73.7, 201, 196, 187, 188, 135, 0, 140, 218},
                                            {187, 207, 175, 169, 160, 190, 87.3, 140, 0, 192},
                                            {38.4, 286, 19.6, 42.2, 33.4, 63.4, 277, 218, 192, 0}
                                       };

    int RotaAtual[CIDADES] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0}, RotaNova[CIDADES] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0}, repetir = 1;

    float MelhorCusto, NovoCusto;


    GeraSolucaoInicial( RotaAtual, CIDADES );

	 for( int z = 0 ; z < CIDADES ; z++ ){

        cout << RotaAtual[z] << " ";

	}

	cout << endl;


    do{

        inicio:

        MelhorCusto = CustoDaSolucao( RotaAtual, Distancias, CIDADES);

        for( int i = 1; i < CIDADES - 1; i++ ) {

            for( int k = i + 1; k < CIDADES; k++ ) {

                Movimento2Opt( RotaAtual, RotaNova, i, k, CIDADES );

                NovoCusto = CustoDaSolucao( RotaNova, Distancias, CIDADES );

                if( NovoCusto < MelhorCusto ) {

                    for( int a = 0 ; a < CIDADES ; a++ ){

                        RotaAtual[a] = RotaNova[a];

                    }

                    goto inicio;

                }

            }

        }

        repetir = 0;

    }while( repetir != 0 );

	MelhorCusto = CustoDaSolucao( RotaAtual, Distancias, CIDADES);

    for( int z = 0 ; z < CIDADES ; z++ ){

        cout << RotaAtual[z] << " ";

	}

	cout << endl;

    cout << endl <<  "Deslocamento minimo em Km : " << MelhorCusto << endl;

    cout << endl << "Ordem de visitacao das cidades:" << endl << endl;

    for( int z = 0 ; z < CIDADES ; z++ ){

        switch ( RotaAtual[z] ){

            case 1:
                cout << "NATAL";
                break;
            case 2:
                cout << "MOSSORO";
                break;
            case 3:
                cout << "PARNAMIRIM";
                break;
            case 4:
                cout << "SAO GONCALO DO AMARANTE";
                break;
            case 5:
                cout << "MACAIBA";
                break;
            case 6:
                cout << "CEARA-MIRIM";
                break;
            case 7:
                cout << "CAICO";
                break;
            case 8:
                cout << "ASSU";
                break;
            case 9:
                cout << "CURRAIS NOVOS";
                break;
            case 10:
                cout << "SAO JOSE DE MIPIBU";
                break;
        }

        if( z < CIDADES - 1 ){

           cout << " => ";
        }


    }
    cout << " => NATAL" << endl << endl;

    system( "pause" );

    return 0;

}

