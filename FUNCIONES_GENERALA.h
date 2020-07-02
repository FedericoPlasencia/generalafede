#include<cstdio>

#include <iostream>

#include "rlutil.h"

using namespace std;

#include<cstdlib>

#ifndef FUNCIONES_GENERALA_H_INCLUDED

#define FUNCIONES_GENERALA_H_INCLUDED





void tirarDados(int vecDados[], int tam);
void mostrarDados(int vecDados[], int tam);
void resetDados(int vecDados[], int tam);
int sumarPuntos(int vecDados[], int tam);
void juego1jugador();
void juego2jugadores();
void dados();
void recuadro();
int funciondepuntaje(int);

int funciondepuntaje(int contador[6]){
int i;int puntos=0;int acu=0; int contadordeescalera=0;
bool b2,b3=false;
for(i=0;i<6;i++){
if (contador[i]==5){
    puntos=50;}
else if(contador[i]==4){
        puntos=40;}
else if(contador[i]==3){
        b3=true;puntos=(i+1)*3;}
else if(contador[i]==2){
        b2=true;puntos=(i+1)*2;}
else if(contador[i]==1){
        contadordeescalera++; puntos=i+1; }
else if(contadordeescalera!=5 && contadordeescalera !=0) {
        contadordeescalera--;}
}
if (b2==true && b3==true){puntos=30;}
if(contadordeescalera==5){puntos=25;}
acu+=puntos;

return acu;
}


void recuadro(){
rlutil::locate(1,2);
rlutil::setBackgroundColor(rlutil::WHITE);
cout<<"                                                  ";
rlutil::locate(1,4);
rlutil::setBackgroundColor(rlutil::WHITE);
cout<<"                                                  ";
rlutil::locate(1,3);
rlutil::setBackgroundColor(rlutil::WHITE);
cout<<" ";
rlutil::locate(50,3);
rlutil::setBackgroundColor(rlutil::WHITE);
cout<<" ";
}

void dados(){

    rlutil::locate(3,10);
    cout<<"     ";
    rlutil::locate(3,11);
    cout<<"  *  ";
    rlutil::locate(3,12);
    cout<<"     ";

    rlutil::locate(10,10);
    cout<<"*    ";
    rlutil::locate(10,11);
    cout<<"     ";
    rlutil::locate(10,12);
    cout<<"    *";

    rlutil::locate(17,10);
    cout<<"*    ";
    rlutil::locate(17,11);
    cout<<"  *  ";
    rlutil::locate(17,12);
    cout<<"    *";

    rlutil::locate(24,10);
    cout<<"*   *";
    rlutil::locate(24,11);
    cout<<"     ";
    rlutil::locate(24,12);
    cout<<"*   *";

    rlutil::locate(31,10);
    cout<<"*   *";
    rlutil::locate(31,11);
    cout<<"  *  ";
    rlutil::locate(31,12);
    cout<<"*   *";

    rlutil::locate(38,10);
    cout<<"*   *";
    rlutil::locate(38,11);
    cout<<"*   *";
    rlutil::locate(38,12);
    cout<<"*   *";
    }


void juego1jugador(){
    int vecDados[6]={}, opcion, ronda=1, puntajeTotal=0, puntajeMaximo=0;
    int puntajeRonda=0, lanzamiento=1, i;
    char ganador[25], jugador[25], continuarLanzando;
    int tam=5, cualDado;



        while ( getchar() != '\n');

        cout<<"INGRESE NOMBRE DEL JUGADOR: ";

        cin.getline(jugador,25);
        rlutil::locate(5,10);
        cout<< "¡A comenzar a jugar!";
        rlutil::locate(1,20);
        system("pause");
        system("cls");


    while (ronda!=11){
        while (lanzamiento!=3){

            rlutil::locate(15,1);
            cout<<"Turno de: "<<jugador<<endl;
            rlutil::locate(4,3);
            cout<<"Ronda N: "<<ronda<<endl;
            rlutil::locate(17,3);
            cout<<"Puntaje: "<<puntajeTotal<<endl;
            rlutil::locate(31,3);
            cout<<"Lanzamiento N: "<<lanzamiento<<endl;
            cout<<endl;
            cout<<endl;
            recuadro();
            rlutil::setBackgroundColor(rlutil::MAGENTA);
            rlutil::setColor(rlutil::WHITE);

            cout<<endl;
            while ( getchar() != '\n');
            tirarDados (vecDados, tam);
            rlutil::locate(2,7);
            mostrarDados(vecDados, tam);
            cout<<endl;
            cout<<endl;
            while (lanzamiento!=3){
            rlutil::locate(1,9);
            cout<<"Continuar lanzando?: ";
            cin>>continuarLanzando;
            switch (continuarLanzando){
            case 'S':
            case 's':
                lanzamiento++;
                cout<<"Cuantos dados desea volver a lanzar?: ";
                cin>>tam;
                if (tam==5){
                    tirarDados(vecDados, tam);
                }
                else {
                    for (i=0;i<tam;i++){
                        cout<<"Cual dado?: ";
                        cin>>cualDado;
                        switch (cualDado) {
                            case 1:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 2:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 3:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 4:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 5:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            }
                        }
                    }
                    system("cls");
            rlutil::locate(15,1);
            cout<<"Turno de: "<<jugador<<endl;
            rlutil::locate(4,3);
            cout<<"Ronda N: "<<ronda<<endl;
            rlutil::locate(17,3);
            cout<<"Puntaje: "<<puntajeTotal<<endl;
            rlutil::locate(31,3);
            cout<<"Lanzamiento N: "<<lanzamiento<<endl;

            recuadro();
            rlutil::setBackgroundColor(rlutil::MAGENTA);
            rlutil::setColor(rlutil::WHITE);


            rlutil::locate(2,7);
                    mostrarDados(vecDados, 5);
                    tam=5;
            break;

            case 'n':
            case 'N':
                system("pause");
                cout<<endl;
                while ( getchar() != '\n');
                lanzamiento=3;

                sumarPuntos(vecDados,tam);
                cout<<endl;
                break;
            }
        }
        system("cls");
            rlutil::setBackgroundColor(rlutil::WHITE);
            rlutil::setColor(rlutil::BLACK);
            rlutil::locate(9,3);
            cout<< "Fin del turno de "<<jugador;
            cout<<endl;
            rlutil::setBackgroundColor(rlutil::MAGENTA);
            rlutil::setColor(rlutil::WHITE);
            rlutil::locate(5,6);
            cout<<"Fin de la ronda N: "<<ronda<<endl;
            rlutil::locate(5,7);
            cout<<"Puntaje de la ronda de: "<<puntajeRonda<<endl;
            rlutil::locate(5,8);
            cout<<"Puntaje total de "<<jugador<<": "<<puntajeTotal<<endl;
            cout<<endl;
            rlutil::locate(5,12);
            cout<<"Proximo turno ..."<<endl;
            rlutil::locate(5,14);
            system("pause");
            system("cls");
            cout<<endl;
            while ( getchar() != '\n');

            sumarPuntos(vecDados,tam);
            cout<<endl;
        }
        lanzamiento=1;
        ronda++;
        if (ronda==11) {
            cout<<"FIN DEL JUEGO"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            }
    }
}



void juego2jugadores(){

    int  matrixJuego[3][3], vecDados[6]={}, opcion, ronda=1, puntajeTotal1=0, puntajeTotal2=0, puntajeMaximo=0;
    int puntajeRonda=0, lanzamiento=1, i;
    char ganador[25], jugador1[25], jugador2[25], continuarLanzando;
    int tam=5, cualDado;


    cout<<"INGRESE NOMBRE DEL JUGADOR 1: "<<endl;
    cin.getline(jugador1,25);
    cout<<"INGRESE NOMBRE DEL JUGADOR 2: "<<endl;
    cin.getline(jugador2,25);
    cout<< "¡A comenzar a jugar!"<<endl;
    cout<< "Presione enter para continuar...";
    system("pause");
    cout<<endl;
    while ( getchar() != '\n');

while (ronda!=11){
    while (lanzamiento!=3){
        cout<<"Turno de "<<jugador1<<endl;
        cout<<"Ronda n° "<<ronda<<endl;
        cout<<"Puntaje de "<<jugador1<<": "<<puntajeTotal1<<endl;
        cout<<"Lanzamiento n° "<<lanzamiento<<endl;
        cout<<endl;
        cout<<endl;
        cout<< "Presione enter para tirar los dados...";
        cin.ignore();
        system("pause");
        cout<<endl;
        while ( getchar() != '\n');
        tirarDados (vecDados, tam);
        mostrarDados(vecDados, tam);
        cout<<endl;
        cout<<endl;

        while (lanzamiento!=3){
            cout<<"¿Continuar lanzando?: "<<endl;
            cin>>continuarLanzando;
            switch (continuarLanzando){
            case 'S':
            case 's':
                lanzamiento++;
                cout<<"¿Cuántos dados desea volver a lanzar?: "<<endl;
                cin>>tam;
                if (tam==5){
                    tirarDados(vecDados, tam);
                }
                else {
                    for (i=0;i<tam;i++){
                        cout<<"¿Cuál dado?: "<<endl;
                        cin>>cualDado;
                        switch (cualDado) {
                            case 1:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 2:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 3:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 4:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 5:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            }
                        }
                    }
                    mostrarDados(vecDados, 5);
                    cout<<endl;
                    cout<<"Lanzamiento n° "<<lanzamiento<<endl;
                    cout<<endl;
                    tam=5;
            break;

            case 'n':
            case 'N':

                cout<< "Presione enter para continuar...";
                system("pause");
                cout<<endl;
                while ( getchar() != '\n');

                lanzamiento=3;
                sumarPuntos(vecDados,tam);
                cout<<endl;
                break;
            }
        }
        }

        cout<< "Fin del turno de "<<jugador1<<endl;
        cout<<endl;
        cout<<"Ronda n° "<<ronda<<endl;
        cout<<"Puntaje de la ronda de "<<jugador1<<": "<<puntajeRonda<<endl;
        cout<<"Puntaje total de "<<jugador1<<": "<<puntajeTotal1<<endl;
        cout<<"Puntaje total de "<<jugador2<<": "<<puntajeTotal2<<endl;
        cout<<endl;
        cout<<"Próximo turno de "<<jugador2<<endl;

        cout<< "Presione enter para continuar...";
        cin.ignore();
        system("pause");
        cout<<endl;
        while ( getchar() != '\n');

        lanzamiento=1;
        puntajeRonda=0;
        sumarPuntos(vecDados,tam);
        cout<<endl;

        while (lanzamiento!=3){
        cout<<"Turno de "<<jugador2<<endl;
        cout<<"Ronda n° "<<ronda<<endl;
        cout<<"Puntaje de "<<jugador2<<": "<<puntajeTotal2<<endl;
        cout<<"Lanzamiento n° "<<lanzamiento<<endl;
        cout<<endl;
        cout<<endl;
        cout<< "Presione enter para tirar los dados...";
        system("pause");
        cout<<endl;
        while ( getchar() != '\n');
        tirarDados (vecDados, tam);
        mostrarDados(vecDados, tam);
        cout<<endl;
        cout<<endl;
        while (lanzamiento!=3){
            cout<<"¿Continuar lanzando?: "<<endl;
            cin>>continuarLanzando;
            switch (continuarLanzando){
            case 'S':
            case 's':
                lanzamiento++;
                cout<<"¿Cuántos dados desea volver a lanzar?: "<<endl;
                cin>>tam;
                if (tam==5){
                    tirarDados(vecDados, tam);
                }
                else {
                    for (i=0;i<tam;i++){
                        cout<<"¿Cuál dado?: "<<endl;
                        cin>>cualDado;
                        switch (cualDado) {
                            case 1:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 2:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 3:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 4:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 5:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            }
                        }
                    }
                    mostrarDados(vecDados, 5);
                    cout<<endl;
                    cout<<"Lanzamiento n° "<<lanzamiento<<endl;
                    cout<<endl;
                    tam=5;
            break;

            case 'n':
            case 'N':
                cout<< "Presione enter para continuar...";
                system("pause");
                cout<<endl;
                while ( getchar() != '\n');
                lanzamiento=3;

                sumarPuntos(vecDados,tam);
                cout<<endl;
                break;
            }
        }
            cout<< "Fin del turno de "<<jugador2<<endl;
            cout<<endl;
            cout<<"Fin de la ronda n° "<<ronda<<endl;
            cout<<"Puntaje de la ronda de "<<jugador2<<": "<<puntajeRonda<<endl;
            cout<<"Puntaje total de "<<jugador1<<": "<<puntajeTotal1<<endl;
            cout<<"Puntaje total de "<<jugador2<<": "<<puntajeTotal2<<endl;
            cout<<endl;
            cout<<"Próximo turno de "<<jugador1<<endl;

            cout<< "Presione enter para continuar...";
            system("pause");
            cout<<endl;
            while ( getchar() != '\n');

            sumarPuntos(vecDados,tam);
            cout<<endl;
        }
        lanzamiento=1;
        ronda++;
        if (ronda==11) {
            cout<<"FIN DEL JUEGO"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
        }

    }
}





void tirarDados(int vecDados[], int tam){
    int i, n;
    srand(time(NULL));
    for(i=0;i<tam;i++){
       vecDados[i]=(rand()%6)+1;
     }
    }

 void mostrarDados(int vecDados[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<vecDados[i]<<"\t";
    }
    cout<<endl;
 }

 void resetDados(int vecDados[], int tam){
    int i;
    for(i=0;i<tam;i++){
       vecDados[i]=0;
    }
 }

 int sumarPuntos(int vecDados[], int tam){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=vecDados[i];

    }
    return suma;
 }





#endif // FUNCIONES_GENERALA_H_INCLUDED
