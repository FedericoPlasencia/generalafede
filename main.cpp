#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include "rlutil.h"
#include"FUNCIONES_GENERALA.H"
using namespace std;


int main(){

int  opcion, puntajeMaximo=0, puntaje1, puntaje2;
bool bandjuego1=false;
rlutil::setBackgroundColor(rlutil::MAGENTA);
rlutil::setColor(rlutil::WHITE);
Recuadro();
rlutil::locate(5,3);
cout<<"BIENVENIDO AL JUEGO DE LA GENERALA ";

dados();

rlutil::setBackgroundColor(rlutil::MAGENTA);
rlutil::setColor(rlutil::WHITE);
rlutil::locate(2,19);
system("pause");
system("cls");
while(true){
    Recuadromenu();
    rlutil::locate(16,3);
    cout<<"MENU DEL JUEGO";
    rlutil::locate(3,7);
    cout<<"1- JUEGO NUEVO: UN JUGADOR ";
    rlutil::locate(3,9);
    cout<<"2- JUEGO NUEVO: DOS JUGADORES ";
    rlutil::locate(3,11);
    cout<<"3- PUNTUACION MAS ALTA";
    rlutil::locate(3,13);
    cout<<"4- SALIR";
    rlutil::locate(3,15);
    cout<<endl<<"| ELIJA UNA OPCION: ";
    cin>>opcion;


   system("cls");


    switch(opcion){

        case 1:
            puntaje1=juego1jugador();
            if (bandjuego1==false){
                puntajeMaximo=puntaje1;
            }
            else {
                if (puntaje1>puntajeMaximo){
                    puntajeMaximo=puntaje1;
                }
            }
            bandjuego1=true;

            break;

        case 2:
            puntaje2=juego2jugadores();
            if (bandjuego1==false){
                puntajeMaximo=puntaje2;
            }
            else {
                if (puntaje1>puntajeMaximo){
                    puntajeMaximo=puntaje2;
                }
            }
            bandjuego1=true;

            break;

        case 3:
            rlutil::cls();
            cout<<"La puntuación más alta es de: "<<puntajeMaximo<<endl;
            break;

        case 4:
            return 0;
            break;

        default:
            rlutil::cls();
            cout<<"Opción es incorrecta. Por favor ingrese enter y vuelva a ingresar una opción..."<<endl;
            rlutil::anykey();
            rlutil::cls();
            break;

        }
    }
}
