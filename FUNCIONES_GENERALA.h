#ifndef FUNCIONES_GENERALA_H_INCLUDED
#define FUNC_H_INCLUDED
#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<ctype.h>
#include<cstring>
#include "rlutil.h"
using namespace std;
using namespace rlutil;


void cargarDados (int vecDados[]); ///carga el numero de dado que queremos asignarle al vecDados de forma manual, (se encuentra comentada siguiente a tirarDados)
void tirarDados(int vecDados[], int tam);
void dibujarDado(int nroDado, int valor);
void recuadro(int x, int y, int ancho, int alto);
void mostrarDados(int vecDados[], int tam);
void resetDados(int vecDados[], int tam);
int juego1jugador();
int juego2jugadores();
void copiarVector(int v[], int v2[],int tam ); ///copia el vector v en v2
int contarNumerosRepetidos(int v[], int numero, int tam);
int maximoVector(int v[], int tam);///devuelve  la posición (primera) que ocupa el máximo en el vector
void ordenarVector(int v[], int tam );/// ordena de menor a mayor un vector
bool compararVectores(int v[], int v2[],int tam );// compara los dos vectores que recibe. Si son iguales ///devuelve true, si no devuelve false
void Recuadro();///recuadro del juego
int funcionPuntos (int vDados[]);
void dados();
void Recuadromenu();
void dadosTiro();



void dadosTiro(){


    rlutil::locate(2,7);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"    ";
    rlutil::locate(2,8);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"    ";
    rlutil::locate(2,9);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"    ";

    rlutil::locate(7,7);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"     ";
    rlutil::locate(7,8);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"     ";
    rlutil::locate(7,9);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"     ";

    rlutil::locate(15,7);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"     ";
    rlutil::locate(15,8);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"     ";
    rlutil::locate(15,9);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"     ";

    rlutil::locate(23,7);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"     ";
    rlutil::locate(23,8);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"     ";
    rlutil::locate(23,9);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"     ";

    cout<<"     ";
    rlutil::locate(31,7);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"     ";
    rlutil::locate(31,8);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"     ";
    rlutil::locate(31,9);
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::BLACK);
    cout<<"     ";

rlutil::setBackgroundColor(rlutil::MAGENTA);
rlutil::setColor(rlutil::WHITE);

}



void Recuadromenu(){
int x,y;
for(x=0;x<48;x++){
    rlutil::locate(x,1);
    cout<<"-";
    rlutil::locate(x,5);
    cout<<"-";
     rlutil::locate(x,20);
    cout<<"-";}
    for(y=2;y<20;y++){
     rlutil::locate(1,y);
    cout<<"|";
     rlutil::locate(47,y);
    cout<<"|";}
}

void dados(){
rlutil::setBackgroundColor(rlutil::WHITE);
rlutil::setColor(rlutil::BLACK);

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


void Recuadro(){
 int x,y;
for(x=0;x<48;x++){
    rlutil::locate(x,1);
    cout<<"-";
     rlutil::locate(x,20);
    cout<<"-";}
for(y=2;y<20;y++){
  rlutil::locate(1,y);
    cout<<"|";
     rlutil::locate(47,y);
    cout<<"|";}
}


int funcionPuntos (int vDados[]){
    int i, puntos=0, puntos1=0, repetidos=0, vecEscalera1[5]={}, vecEscalera2[5]={}, copiavDados[5];
    bool rep3=false, rep2=false, escalera1=false, escalera2=false;
    const int tam=5;

    repetidos=contarNumerosRepetidos(vDados,1,5);
    if (repetidos==5){
    cout<<"Generala";
    puntos=50;
    }
    else {
        if (repetidos==4){
            puntos=40;
        }
        else{
            if (repetidos==3){
            rep3=true;
            puntos=3*1;
            }
            else {
                if (repetidos==2){
                    rep2=true;
                    puntos=2*1;
                }
                else {
                    if (repetidos==1){
                        puntos1=1;
                    }

                }
            }
        }
    }


    repetidos=contarNumerosRepetidos(vDados,2,5);
    if (repetidos==5){
    cout<<"Generala";
    puntos=50;
    }
    else {
        if (repetidos==4){
            puntos=40;
        }
        else{
            if (repetidos==3){
            rep3=true;
            puntos=3*2;
            }
            else {
                if (repetidos==2){
                    rep2=true;
                    puntos=2*2;
                }
                else {
                    if (repetidos==1){
                        puntos1=2;
                    }

                }
            }
        }
    }

    repetidos=contarNumerosRepetidos(vDados,3,5);
    if (repetidos==5){
    cout<<"Generala";
    puntos=50;
    }
    else {
        if (repetidos==4){
            puntos=40;
        }
        else{
            if (repetidos==3){
            rep3=true;
            puntos=3*3;
            }
            else {
                if (repetidos==2){
                    rep2=true;
                    puntos=2*3;
                }
                else {
                    if (repetidos==1){
                        puntos1=3;
                    }

                }
            }
        }
    }

    repetidos=contarNumerosRepetidos(vDados,4,5);
   if (repetidos==5){
    cout<<"Generala";
    puntos=50;
    }
    else {
        if (repetidos==4){
            puntos=40;
        }
        else{
            if (repetidos==3){
            rep3=true;
            puntos=3*4;
            }
            else {
                if (repetidos==2){
                    rep2=true;
                    puntos=2*4;
                }
                else {
                    if (repetidos==1){
                        puntos1=4;
                    }

                }
            }
        }
    }

    repetidos=contarNumerosRepetidos(vDados,5,5);
    if (repetidos==5){
    cout<<"Generala";
    puntos=50;
    }
    else {
        if (repetidos==4){
            puntos=40;
        }
        else{
            if (repetidos==3){
            rep3=true;
            puntos=3*5;
            }
            else {
                if (repetidos==2){
                    rep2=true;
                    puntos=2*5;
                }
                else {
                    if (repetidos==1){
                        puntos1=5;
                    }

                }
            }
        }
    }

    repetidos=contarNumerosRepetidos(vDados,6,5);
    if (repetidos==5){
    cout<<"Generala";
    puntos=50;
    }
    else {
        if (repetidos==4){
            puntos=40;
        }
        else{
            if (repetidos==3){
            rep3=true;
            puntos=3*6;
            }
            else {
                if (repetidos==2){
                    rep2=true;
                    puntos=2*6;
                }
                else {
                    if (repetidos==1){
                        puntos1=6;
                    }

                }
            }
        }
    }
    if (rep3==true && rep2==true){
        ///foul
        puntos=30;
    }


    for (i=0;i<5;i++){
        vecEscalera1[i]=i+1;
        vecEscalera2[i]=i+2;
    }
    copiarVector(vDados, copiavDados, tam);
    ordenarVector(copiavDados,5);
    escalera1=compararVectores(copiavDados,vecEscalera1,5);
    escalera2=compararVectores(copiavDados,vecEscalera2,5);

    if (escalera1==true || escalera2==true){
        puntos=25;
    }
    if (puntos1>puntos){
        puntos=puntos1;
    }



return puntos;
}

void copiarVector(int v[], int v2[],int tam ){
    int i;
    for(i=0;i<tam;i++){
        v2[i]=v[i];
    }
}

int contarNumerosRepetidos(int v[], int numero, int tam){
    int i, cant=0;
    for(i=0;i<tam;i++){
        if(v[i]==numero) cant++;
        }
    return cant;
}

int maximoVector(int v[], int tam){
    int i, posMax=0;
    for(i=1;i<tam;i++){
        if(v[i]>v[posMax]) {
                posMax=i;
        }
    }
    return posMax;
}

void ordenarVector(int v[], int tam ){
    int i,j, posmin, aux;
    for(i=0;i<tam-1;i++){
        posmin=i;
        for(j=i+1;j<tam;j++){
            if(v[j]<v[posmin]) posmin=j;
        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }
}

bool compararVectores(int v[], int v2[],int tam ){
   int i;
    for(i=0;i<tam;i++){
        if(v2[i]!=v[i]) return false;
    }
    return true;
}


int juego1jugador(){
    int vecDados[6]={}, ronda=1, puntajeTotal=0, cualDado, cant=0, puntajeRonda=0, lanzamiento=1, i;
    const int tam=5;
    char jugador[25], continuarLanzando;
    bool generalaServida=false;
    srand(time(NULL));
        Recuadro();
        rlutil::locate(3,3);
        cout<<"INGRESE NOMBRE DEL JUGADOR: ";
        cin>>jugador;
        rlutil::locate(13,10);
        cout<< "A comenzar a jugar!"<<endl;
        rlutil::locate(3,19);
        system("pause");
        system("cls");
    while (ronda<=10 && generalaServida==false){
        while (lanzamiento<3){
            Recuadromenu();
            rlutil::locate(10,3);
            cout<<"Turno de "<<jugador<<endl;
            rlutil::locate(5,7);
            cout<<"Ronda N: "<<ronda;
            rlutil::locate(5,9);
            cout<<"Puntaje: "<<puntajeTotal;
            rlutil::locate(5,11);
            cout<<"Lanzamiento N: "<<lanzamiento;
            rlutil::locate(2,19);
            system("pause");
            system("cls");
            //cargarDados(vecDados);
            tirarDados (vecDados, tam);
            Recuadromenu();
            rlutil::locate(3,3);
            cout<<"Lanzamiento N: "<<lanzamiento;
            rlutil::locate(24,3);
            cout<<"Ronda N: "<<ronda;

            rlutil::locate(3,8);
            mostrarDados(vecDados, tam);
            puntajeRonda=funcionPuntos(vecDados);
            rlutil::setBackgroundColor(rlutil::MAGENTA);
            rlutil::setColor(rlutil::WHITE);

            if (puntajeRonda==50 && lanzamiento==1){
                system("pause");
                system("cls");
                rlutil::setBackgroundColor(rlutil::WHITE);
                rlutil::setColor(rlutil::BLACK);
                Recuadro();
                rlutil::locate(2,6);
                cout<<"GENERALA SERVIDA!! FIN DEL JUEGO, EL GANADOR ES: "<<jugador;
                rlutil::setBackgroundColor(rlutil::MAGENTA);
                rlutil::setColor(rlutil::WHITE);
                puntajeTotal+=100;

                lanzamiento=3;
                generalaServida=true;
                rlutil::locate(2,19);
                system("pause");
            }

            while (lanzamiento<3){
            rlutil::locate(3,11);
            cout<<"Continuar lanzando S/N: ";
            cin>>continuarLanzando;
            switch (continuarLanzando){
            case 'S':
            case 's':
                lanzamiento++;
                rlutil::locate(3,12);
                cout<<"Cuantos dados desea volver a lanzar?: ";
                cin>>cant;
                if (cant==5){
                    tirarDados(vecDados, tam);
                }
                else {
                    for (i=0;i<cant;i++){
                        rlutil::locate(3,13+i);
                        cout<<"Cual dado?: ";
                        cin>>cualDado;
                        vecDados[cualDado-1]=(rand()%6)+1;
                        }

                    }

                    system("cls");
                    Recuadromenu();
                    rlutil::locate(3,3);
                    cout<<"Lanzamiento N: "<<lanzamiento;
                    rlutil::locate(24,3);
                    cout<<"Ronda N: "<<ronda;
                    rlutil::locate(3,8);
                    mostrarDados(vecDados, tam);
                    if (lanzamiento==3){
                    puntajeRonda=funcionPuntos(vecDados);
                    rlutil::locate(2,19);
                    system("pause");
                    }



            break;

            case 'n':
            case 'N':

                system("cls");
                while ( getchar() != '\n');
                lanzamiento=3;
                puntajeRonda=funcionPuntos(vecDados);
                break;
            }
        }
            if (generalaServida==false){
            puntajeTotal+=puntajeRonda;
            system("cls");
            Recuadro();
            rlutil::locate(9,7);
            cout<<"Fin de la ronda N: "<<ronda;
            rlutil::locate(9,10);
            cout<<"Puntaje de la ronda : "<<puntajeRonda;
            rlutil::locate(9,11);
            cout<<"Puntaje total: "<<puntajeTotal;
            rlutil::locate(9,14);
            cout<<"Proximo turno ..."<<endl;
            rlutil::locate(2,19);
            system("pause");
            system("cls");

            while ( getchar() != '\n');

            }
        }
        puntajeRonda=0;
        lanzamiento=1;
        ronda++;
        if (ronda>=11) {
            Recuadro();
            rlutil::locate(8,9);
            cout<<"FIN DEL JUEGO de: "<<jugador;
            rlutil::locate(8,12);
            cout<<"Puntaje total: "<<puntajeTotal;
            rlutil::locate(2,19);
            system("pause");
            system("cls");
            }
    }
return puntajeTotal;
}

int juego2jugadores(){

    int  vecDados[6]={},cualDado, cant, ronda=1, puntajeTotal1=0, puntajeTotal2=0;
    int puntajeRonda=0, lanzamiento=1, i, puntajeParaMain, empateGeneralaServida=0;
    char jugador1[25], jugador2[25], continuarLanzando;
    const int tam=5;
    bool generalaServida=false;
    srand(time(NULL));

    Recuadro();
        rlutil::locate(3,3);
        cout<<"INGRESE NOMBRE DEL JUGADOR1: ";
        cin>>jugador1;
        rlutil::locate(3,5);
        cout<<"INGRESE NOMBRE DEL JUGADOR2: ";
        cin>>jugador2;
        rlutil::locate(13,10);
        cout<< "A comenzar a jugar!"<<endl;
        rlutil::locate(3,19);
        system("pause");
        system("cls");


while (ronda<=10 && generalaServida==false){
    while (lanzamiento<3){
         Recuadro();
        rlutil::locate(10,3);
        cout<<"Turno de "<<jugador1;
        rlutil::locate(5,7);
        cout<<"Ronda N: "<<ronda;
        rlutil::locate(5,9);
        cout<<"Puntaje de "<<jugador1<<": "<<puntajeTotal1;
        rlutil::locate(5,11);
        cout<<"Lanzamiento N: "<<lanzamiento;

        rlutil::locate(2,19);
        system("pause");
        system("cls");
        //cargarDados(vecDados);
        tirarDados (vecDados, tam);
         Recuadromenu();
        rlutil::locate(3,3);
        cout<<"Lanzamiento N: "<<lanzamiento;
        rlutil::locate(24,3);
        cout<<"Ronda N: "<<ronda;

        rlutil::locate(3,8);
        mostrarDados(vecDados, tam);
        puntajeRonda=funcionPuntos(vecDados);

        if (puntajeRonda==50 && lanzamiento==1){
                system("pause");
                system("cls");
                rlutil::setBackgroundColor(rlutil::WHITE);
                rlutil::setColor(rlutil::BLACK);
                Recuadro();
                rlutil::locate(2,8);
                cout<<"GENERALA SERVIDA!! FIN DEL JUEGO, EL GANADOR ES: "<<jugador1;
                rlutil::setBackgroundColor(rlutil::MAGENTA);
                rlutil::setColor(rlutil::WHITE);
                puntajeTotal1+=100;
                empateGeneralaServida++;
                ronda++;
                lanzamiento=3;
                generalaServida=true;
                rlutil::locate(2,19);
                system("pause");
        }

        while (lanzamiento<3){
            rlutil::locate(3,11);
            cout<<"Continuar lanzando S/N: ";
            cin>>continuarLanzando;
            switch (continuarLanzando){
            case 'S':
            case 's':
                lanzamiento++;
                rlutil::locate(3,12);
                cout<<"Cuantos dados desea volver a lanzar?: ";
                cin>>cant;
                if (cant==5){
                    tirarDados(vecDados, tam);
                }
                else {
                    for (i=0;i<cant;i++){
                        rlutil::locate(3,13+i);
                        cout<<"Cual dado?: ";
                        cin>>cualDado;
                        vecDados[cualDado-1]=(rand()%6)+1;
                        }

                    }

                    system("cls");
                    Recuadromenu();
                    rlutil::locate(3,3);
                    cout<<"Lanzamiento N: "<<lanzamiento;
                    rlutil::locate(24,3);
                    cout<<"Ronda N: "<<ronda;
                    rlutil::locate(3,8);
                    mostrarDados(vecDados, tam);
                    if (lanzamiento==3){
                    puntajeRonda=funcionPuntos(vecDados);}
                    rlutil::locate(2,19);
                    system("pause");
                    cant=5;
            break;

            case 'n':
            case 'N':

                system("cls");

                while ( getchar() != '\n');

                lanzamiento=3;
                puntajeRonda=funcionPuntos(vecDados);
                break;
            }
        }
        }
        puntajeTotal1+=puntajeRonda;

        if (generalaServida==false){
         Recuadro();
        rlutil::locate(10,3);
        cout<< "Fin del turno de: "<<jugador1;
        rlutil::locate(5,6);
        cout<<"Ronda N: "<<ronda;
        rlutil::locate(5,8);
        cout<<"Puntaje de la ronda de "<<jugador1<<": "<<puntajeRonda;
        rlutil::locate(5,11);
        cout<<"Puntaje total de "<<jugador1<<": "<<puntajeTotal1;
        rlutil::locate(5,13);
        cout<<"Puntaje total de "<<jugador2<<": "<<puntajeTotal2;
        rlutil::locate(5,16);
        cout<<"Proximo turno de "<<jugador2;
        rlutil::locate(2,19);
        system("pause");
        system("cls");
        while ( getchar() != '\n');}
        lanzamiento=1;
        puntajeRonda=0;


        while (lanzamiento<3){
        Recuadro();
        rlutil::locate(10,3);
        cout<<"Turno de "<<jugador2;
        rlutil::locate(5,7);
        cout<<"Ronda N: "<<ronda;
        rlutil::locate(5,9);
        cout<<"Puntaje de "<<jugador2<<": "<<puntajeTotal2;
        rlutil::locate(5,11);
        cout<<"Lanzamiento N: "<<lanzamiento;
        rlutil::locate(2,19);
        system("pause");
        system("cls");

        //cargarDados(vecDados);
        tirarDados (vecDados, tam);
        Recuadromenu();
        rlutil::locate(3,3);
        cout<<"Lanzamiento N: "<<lanzamiento;
        rlutil::locate(24,3);
        cout<<"Ronda N: "<<ronda;

        rlutil::locate(3,8);
        mostrarDados(vecDados, tam);
        puntajeRonda=funcionPuntos(vecDados);
         if (puntajeRonda==50 && lanzamiento==1){
                system("pause");
               system("cls");
                rlutil::setBackgroundColor(rlutil::WHITE);
                rlutil::setColor(rlutil::BLACK);
                Recuadro();
                rlutil::locate(2,8);
                cout<<"GENERALA SERVIDA!! FIN DEL JUEGO, EL GANADOR ES: "<<jugador2;
                rlutil::setBackgroundColor(rlutil::MAGENTA);
                rlutil::setColor(rlutil::WHITE);
                puntajeTotal2+=100;
                empateGeneralaServida++;
                ronda++;
                lanzamiento=3;
                generalaServida=true;
                rlutil::locate(2,19);
                system("pause");
            }

        while (lanzamiento<3){
                rlutil::locate(3,11);
            cout<<"Continuar lanzando S/N: ";
            cin>>continuarLanzando;
            switch (continuarLanzando){
            case 'S':
            case 's':
                lanzamiento++;
                rlutil::locate(3,12);
                cout<<"Cuantos dados desea volver a lanzar?: ";
                cin>>cant;
                if (cant==5){
                    tirarDados(vecDados, tam);
                }
                else {
                    for (i=0;i<cant;i++){
                        rlutil::locate(3,13+i);
                        cout<<"Cual dado?: ";
                        cin>>cualDado;
                        vecDados[cualDado-1]=(rand()%6)+1;
                        }

                    }

                    system("cls");
                    Recuadromenu();
                    rlutil::locate(3,3);
                    cout<<"Lanzamiento N: "<<lanzamiento;
                    rlutil::locate(24,3);
                    cout<<"Ronda N: "<<ronda;
                    rlutil::locate(3,8);
                    mostrarDados(vecDados, tam);
                    if (lanzamiento==3){
                    puntajeRonda=funcionPuntos(vecDados);}
                    rlutil::locate(2,19);
                    system("pause");
                    cant=5;
            break;

            case 'n':
            case 'N':
                system("cls");

                lanzamiento=3;
                puntajeRonda=funcionPuntos(vecDados);


                cout<<endl;
                break;
            }
        }
        puntajeTotal2+=puntajeRonda;

        if (generalaServida==false){
            Recuadro();
        rlutil::locate(10,3);
        cout<< "Fin del turno de: "<<jugador2;
        rlutil::locate(5,6);
        cout<<"Ronda N: "<<ronda;
        rlutil::locate(5,8);
        cout<<"Puntaje de la ronda de "<<jugador2<<": "<<puntajeRonda;
        rlutil::locate(5,11);
        cout<<"Puntaje total de "<<jugador2<<": "<<puntajeTotal2;
        rlutil::locate(5,13);
        cout<<"Puntaje total de "<<jugador1<<": "<<puntajeTotal1;
        rlutil::locate(5,16);
        cout<<"Proximo turno de "<<jugador1;
        ronda++;
        rlutil::locate(2,19);
        system("pause");
        system("cls");
        }
        }
        if (generalaServida==false) {
            lanzamiento=1;
            puntajeRonda=0;
        }

    }
       if (ronda>=11 || generalaServida==true) {
            Recuadromenu();
            rlutil::setBackgroundColor(rlutil::WHITE);
            rlutil::setColor(rlutil::BLACK);
            rlutil::locate(13,3);
            cout<<"FIN DEL JUEGO";

            if (empateGeneralaServida==2 || puntajeTotal1==puntajeTotal2){
                rlutil::locate(15,8);
                cout<<"EMPATE";
                rlutil::locate(3,10);
                cout<<"LOS JUGADORES SON: "<<jugador1<<" Y "<<jugador2;

            }
            else {
                if (puntajeTotal1>puntajeTotal2){
                    puntajeParaMain=puntajeTotal1;
                    rlutil::locate(5,8);
                    cout<<"EL GANADOR DE ESTE JUEGO ES: "<<jugador1;
                   rlutil::locate(5,10);
                    cout<<"LA CANTIDAD DE RONDAS FUE DE: "<<ronda-1;

                }
                else {
                    puntajeParaMain=puntajeTotal2;
                    rlutil::locate(5,8);
                    cout<<"EL GANADOR DE ESTE JUEGO ES: "<<jugador2<<endl;
                    rlutil::locate(5,10);
                    cout<<"LA CANTIDAD DE RONDAS FUE DE: "<<ronda-1<<endl;

            }
        }
       }
        rlutil::locate(2,19);
        system("pause");
        system("cls");
        rlutil::setBackgroundColor(rlutil::MAGENTA);
        rlutil::setColor(rlutil::WHITE);
return puntajeParaMain;
}


void cargarDados (int vecDados[]){
    int i;
    for(i=0;i<5;i++){
        cout<<"INGRESE NUMERO DE DADO "<<i+1<<": ";
        cin>>vecDados[i];
    }
}

void tirarDados(int v[], int tam){
    int i;
    for(i=0; i<tam; i++){
        v[i] = rand()%6+1;

    }
}

void recuadro(int x, int y, int ancho, int alto){

const char *UI_BOTTOM_RIGHT = "\xD9"; // 217 - ┘
const char *UI_BOTTOM_LEFT = "\xC0"; // 192 - └
const char *UI_TOP_LEFT = "\xDA"; // 218 - ┌
const char *UI_TOP_RIGHT = "\xBF"; // 191 - ┐
const char *UI_CROSS = "\xC5"; // 197 - ┼
const char *UI_HORIZONTAL_LINE = "\xC4"; // 196 - ─
const char *UI_HORIZONTAL_LINE_TOP = "\xC1"; // 193 - ┴
const char *UI_HORIZONTAL_LINE_BOTTOM = "\xC2"; // 194 - ┬";
const char *UI_VERTICAL_LINE = "\xB3"; // 179 - │
const char *UI_VERTICAL_LINE_LEFT = "\xC3"; // 195 - ├
const char *UI_VERTICAL_LINE_RIGHT = "\xB4"; // 180 - ┤


    /// Borramos el espacio del recuadro
    int i, j;
    for(i=x; i<=x+ancho; i++){
        for(j=y; j<=y+alto; j++){
            setBackgroundColor(RED);
            locate(i, j);
            cout << " ";

        }
    }
    setColor(WHITE);
    /// Líneas horizontales
    for(i=x; i<=x+ancho; i++){
        locate(i, y);
        cout << UI_HORIZONTAL_LINE;
        locate(i, y+alto);
        cout << UI_HORIZONTAL_LINE;
    }
    /// Líneas verticales
    for(i=y; i<=y+alto; i++){
        locate(x, i);
        cout << UI_VERTICAL_LINE;
        locate(x+ancho, i);
        cout << UI_VERTICAL_LINE;
    }
    /// Vértices
    locate(x, y);
    cout << UI_TOP_LEFT;
    locate(x, y+alto);
    cout << UI_BOTTOM_LEFT;
    locate(x+ancho, y);
    cout << UI_TOP_RIGHT;
    locate(x+ancho, y+alto);
    cout << UI_BOTTOM_RIGHT;
}


void dibujarDado(int nroDado, int valor){
    const int Y = 5;
    const int ALTO = 4;
    const int INI = 15;
    const int X = INI + (nroDado * 10);
    const int ANCHO = 8;

    /// Ubicaciones del punto
    const int CENTRO_X = X + ANCHO/2;
    const int CENTRO_Y = Y + ALTO/2;
    const int IZQUIERDA = CENTRO_X - 2;
    const int ARRIBA = CENTRO_Y - 1;
    const int DERECHA= CENTRO_X + 2;
    const int ABAJO= CENTRO_Y + 1;


    recuadro(X, Y, ANCHO, ALTO);

    /// Dibujar los puntos
    const char *DOT = "\u2022";

    setBackgroundColor(RED);
    setColor(WHITE);
    switch(valor){
        case 1:
            locate(CENTRO_X, CENTRO_Y);
            cout <<"*";
        break;
        case 2:
            if (nroDado%2 == 0){
                locate(IZQUIERDA, ARRIBA);
                cout << "*";
                locate(DERECHA, ABAJO);
                cout << "*";
            }
            else{
                locate(DERECHA, ARRIBA);
                cout << "*";
                locate(IZQUIERDA, ABAJO);
                cout << "*";
            }
        break;
        case 3:
            if (nroDado%2 == 0){
                locate(IZQUIERDA, ARRIBA);
                cout << "*";
                locate(DERECHA, ABAJO);
                cout << "*";
            }
            else{
                locate(DERECHA, ARRIBA);
                cout << "*";
                locate(IZQUIERDA, ABAJO);
                cout << "*";
            }
            locate(CENTRO_X, CENTRO_Y);
            cout << "*";
        break;
        case 4:
            locate(IZQUIERDA, ARRIBA);
            cout << "*";
            locate(DERECHA, ABAJO);
            cout << "*";
            locate(DERECHA, ARRIBA);
            cout << "*";
            locate(IZQUIERDA, ABAJO);
            cout << "*";
        break;
        case 5:
            locate(IZQUIERDA, ARRIBA);
            cout << "*";
            locate(DERECHA, ABAJO);
            cout << "*";
            locate(DERECHA, ARRIBA);
            cout << "*";
            locate(IZQUIERDA, ABAJO);
            cout << "*";
            locate(CENTRO_X, CENTRO_Y);
            cout << "*";
        break;
        case 6:
            locate(IZQUIERDA, ARRIBA);
            cout << "*";
            locate(DERECHA, ABAJO);
            cout << "*";
            locate(DERECHA, ARRIBA);
            cout << "*";
            locate(IZQUIERDA, ABAJO);
            cout << "*";
            locate(DERECHA, CENTRO_Y);
            cout << "*";
            locate(IZQUIERDA, CENTRO_Y);
            cout << "*";
        break;
    }
    resetColor();
    setBackgroundColor(DARKGREY);
}

 void mostrarDados(int vecDados[], int tam){
    int i;
    for(i=0;i<tam;i++){
    dibujarDado(i+1, vecDados[i]);
}
 }

 void resetDados(int vecDados[], int tam){
    int i;
    for(i=0;i<tam;i++){
       vecDados[i]=0;
    }
 }


#endif FUNCIONES_GENERALA_H_INCLUDED

