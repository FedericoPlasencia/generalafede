#include <clocale>

#include<cstdlib>

#include<cstdio>

#include<ctime>

#include<ctype.h>

#include<cstring>

#include"FUNCIONES_GENERALA.H"

#include <iostream>

#include "rlutil.h"

using namespace std;







int main(){



int  vecDados[6], opcion, ronda=1, puntajeTotal1=0, puntajeTotal2=0, puntajeMaximo=0;

int puntajeRonda=0, lanzamiento1=1, lanzamiento2=1;

char ganador[25], jugador1[25], jugador2[25], continuarLanzando;

const int tam=5;



rlutil::setBackgroundColor(rlutil::MAGENTA);
rlutil::setColor(rlutil::WHITE);



while(true){

rlutil::locate(3,2);
cout<<"-----------------------------------------";
rlutil::locate(3,3);
cout<<"   BIENVENIDO AL JUEGO DE LA GENERALA    ";
rlutil::locate(3,4);
cout<<"-----------------------------------------";
 dados();

rlutil::locate(3,20);
system ("pause");


    system("cls");
    rlutil::locate(20,3);
    cout<<"MENU DEL JUEGO";

    rlutil::locate(5,5);
    cout<<"-------------------------------------------";

    rlutil::locate(5,6);
    cout<<"1- JUEGA UN JUGADOR ";

    rlutil::locate(5,8);
    cout<<"2- JUEGAN DOS JUGADORES ";

    rlutil::locate(5,10);
    cout<<"3- PUNTACION MAS ALTA";

    rlutil::locate(5,12);
    cout<<"4- SALIR";

    rlutil::locate(5,14);
    cout<<"ELIJA UNA OPCION: ";
    cin>>opcion;

    system("cls");




    switch(opcion){



        case 1: //aca podria ir la funcion juego de 1
            juego1jugador();
            break;



            case 2:

                rlutil::locate(5,2);
                cout<<"---------------------------------------------";
                rlutil::locate(25,3);
                cout<<" COMENZAMOS! ";
                rlutil::locate(5,4);
                cout<<"---------------------------------------------";

                 juego2jugadores();





                break;



            case 3:

                cout<<"Puntuación más alta: "<<puntajeMaximo<<endl;



                break;







            case 4:

                return 0;

                break;





        }

    }



}
