
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


void cargarDados (int vecDados[]); ///carga el numero de dado que queremos asignarle al vecDados de forma manual, (se encuentra comentada siguiente a tirarDados)
void tirarDados(int vecDados[], int tam);
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
        cin.getline(jugador,25);
        cin.ignore();
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
            cout<< "Presione enter para tirar los dados...";
            rlutil::anykey();
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
                rlutil::cls();
                Recuadro();
                rlutil::locate(3,6);
                cout<<"GENERALA SERVIDA!! FIN DEL JUEGO, EL GANADOR ES: "<<jugador;

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
            rlutil::locate(9,10);
            cout<<"FIN DEL JUEGO";


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

    cout<<"INGRESE NOMBRE DEL JUGADOR 1: "<<endl;
    cin.getline(jugador1,25);
    cout<<"INGRESE NOMBRE DEL JUGADOR 2: "<<endl;
    cin.getline(jugador2,25);
    cout<< "¡A comenzar a jugar!"<<endl;
    cout<< "Presione enter para continuar...";
    rlutil::anykey();
    cout<<endl;


while (ronda<=10 && generalaServida==false){
    while (lanzamiento<3){
        cout<<"Turno de "<<jugador1<<endl;
        cout<<"Ronda n° "<<ronda<<endl;
        cout<<"Puntaje de "<<jugador1<<": "<<puntajeTotal1<<endl;
        cout<<"Lanzamiento n° "<<lanzamiento<<endl;
        cout<<endl;
        cout<<endl;
        cout<< "Presione enter para tirar los dados...";
        cout<<endl;
        rlutil::anykey();
        //cargarDados(vecDados);
        tirarDados (vecDados, tam);
        mostrarDados(vecDados, tam);
        puntajeRonda=funcionPuntos(vecDados);

        if (puntajeRonda==50 && lanzamiento==1){
                rlutil::cls();
                cout<<"GENERALA SERVIDA!! FIN DEL JUEGO, EL GANADOR ES: "<<jugador1<<endl;
                cout<<endl;
                cout<<endl;
                puntajeTotal1+=100;
                empateGeneralaServida++;
                ronda++;
                lanzamiento=3;
                generalaServida=true;
                rlutil::anykey();
        }
            cout<<endl;
            cout<<endl;
        while (lanzamiento<3){
            cout<<"¿Continuar lanzando?: "<<endl;
            cin>>continuarLanzando;
            switch (continuarLanzando){
            case 'S':
            case 's':
                lanzamiento++;
                cout<<"¿Cuántos dados desea volver a lanzar?: "<<endl;
                cin>>cant;
                if (cant==5){
                    tirarDados(vecDados, tam);
                }
                else {
                      for (i=0;i<cant;i++){
                        cout<<"¿Cuál dado?: "<<endl;
                        cin>>cualDado;
                        vecDados[cualDado-1]=(rand()%6)+1;
                        }
                    }
                    mostrarDados(vecDados, 5);

                    if (lanzamiento==3){
                        puntajeRonda=funcionPuntos(vecDados);
                    }
                    cout<<endl;
                    cout<<"Lanzamiento n° "<<lanzamiento<<endl;
                    cout<<endl;
                    cant=5;
            break;

            case 'n':
            case 'N':

                cout<< "Presione enter para continuar...";
                system("pause");
                cout<<endl;
                while ( getchar() != '\n');

                lanzamiento=3;
                puntajeRonda=funcionPuntos(vecDados);

                cout<<endl;
                break;
            }
        }
        }
        puntajeTotal1+=puntajeRonda;

        if (generalaServida==false){
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

        }


        lanzamiento=1;
        puntajeRonda=0;


        cout<<endl;

        while (lanzamiento<3){
        cout<<"Turno de "<<jugador2<<endl;
        cout<<"Ronda n° "<<ronda<<endl;
        cout<<"Puntaje de "<<jugador2<<": "<<puntajeTotal2<<endl;
        cout<<"Lanzamiento n° "<<lanzamiento<<endl;
        cout<<endl;
        cout<<endl;
        cout<< "Presione enter para tirar los dados...";
        rlutil::anykey();
        cout<<endl;

        //cargarDados(vecDados);
        tirarDados (vecDados, tam);
        mostrarDados(vecDados, tam);
        puntajeRonda=funcionPuntos(vecDados);
         if (puntajeRonda==50 && lanzamiento==1){
                rlutil::cls();
                cout<<"GENERALA SERVIDA!! FIN DEL JUEGO, EL GANADOR ES: "<<jugador2<<endl;
                cout<<endl;
                cout<<endl;
                puntajeTotal2+=100;
                ronda++;
                lanzamiento=3;
                empateGeneralaServida++;
                generalaServida=true;
                rlutil::anykey();
            }
            cout<<endl;
            cout<<endl;
        while (lanzamiento<3){
            cout<<"¿Continuar lanzando?: "<<endl;
            cin>>continuarLanzando;
            switch (continuarLanzando){
            case 'S':
            case 's':
                lanzamiento++;
                cout<<"¿Cuántos dados desea volver a lanzar?: "<<endl;
                cin>>cant;
                if (cant==5){
                    tirarDados(vecDados, tam);
                }
                else {
                      for (i=0;i<cant;i++){
                        cout<<"¿Cuál dado?: "<<endl;
                        cin>>cualDado;
                        vecDados[cualDado-1]=(rand()%6)+1;
                        }
                    }
                    mostrarDados(vecDados, 5);
                    if (lanzamiento==3){
                        puntajeRonda=funcionPuntos(vecDados);
                    }
                    cout<<endl;
                    cout<<"Lanzamiento n° "<<lanzamiento<<endl;
                    cout<<endl;
                    cant=5;
            break;

            case 'n':
            case 'N':
                cout<< "Presione enter para continuar...";
                rlutil::anykey();
                cout<<endl;
                lanzamiento=3;
                puntajeRonda=funcionPuntos(vecDados);


                cout<<endl;
                break;
            }
        }
        puntajeTotal2+=puntajeRonda;

        if (generalaServida==false){
            cout<< "Fin del turno de "<<jugador2<<endl;
            cout<<endl;
            cout<<"Fin de la ronda n° "<<ronda<<endl;
            cout<<"Puntaje de la ronda de "<<jugador2<<": "<<puntajeRonda<<endl;
            cout<<"Puntaje total de "<<jugador1<<": "<<puntajeTotal1<<endl;
            cout<<"Puntaje total de "<<jugador2<<": "<<puntajeTotal2<<endl;
            cout<<endl;
            cout<<"Próximo turno de "<<jugador1<<endl;
            ronda++;

            cout<< "Presione enter para continuar...";
            rlutil::anykey();
            cout<<endl;
            cout<<endl;
        }
        }

        if (generalaServida==false) {
            lanzamiento=1;
            puntajeRonda=0;
        }

    }
       if (ronda>=11 || generalaServida==true) {
            cout<<"FIN DEL JUEGO"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            if (empateGeneralaServida==2 || puntajeTotal1==puntajeTotal2){
                cout<<"EMPATE"<<endl;
                cout<<endl;
                cout<<"LOS JUGADORES QUE HAN EMPATADO SON: "<<jugador1<<" Y "<<jugador2<<endl;
                cout<<endl;
            }
            else {
                if (puntajeTotal1>puntajeTotal2){
                    puntajeParaMain=puntajeTotal1;
                    cout<<endl;
                    cout<<"EL GANADOR DE ESTE JUEGO ES: "<<jugador1<<endl;
                    cout<<endl;
                    cout<<"LA CANTIDAD DE RONDAS FUE DE: "<<ronda-1<<endl;
                    cout<<endl;

                }
                else {
                    puntajeParaMain=puntajeTotal2;
                    cout<<endl;
                    cout<<"EL GANADOR DE ESTE JUEGO ES: "<<jugador2<<endl;
                    cout<<endl;
                    cout<<"LA CANTIDAD DE RONDAS FUE DE: "<<ronda-1<<endl;
                    cout<<endl;
                }
            }
        }
return puntajeParaMain;
}


void cargarDados (int vecDados[]){
    int i;
    for(i=0;i<5;i++){
        cout<<"INGRESE NUMERO DE DADO "<<i+1<<": ";
        cin>>vecDados[i];
        cout<<endl;
    }
}

void tirarDados(int vecDados[], int tam){
    int i;
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


#endif FUNCIONES_GENERALA_H_INCLUDED


