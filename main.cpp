using namespace std;


int main(){

int  opcion, puntajeMaximo=0, puntaje1, puntaje2;
bool bandjuego1=false;


while(true){
rlutil::locate(6,6);
cout<<"BIENVENIDO AL JUEGO DE LA GENERALA ";
rlutil::locate(1,13);
system("pause");
system("cls");
    cout<<"MENU DEL JUEGO"<<endl;
    cout<<"1- JUEGO NUEVO: UN JUGADOR "<<endl;
    cout<<"2- JUEGO NUEVO: DOS JUGADORES "<<endl;
    cout<<"3- PUNTUACION MAS ALTA"<<endl;
    cout<<"4- SALIR"<<endl;
    cout<<"ELIJA UNA OPCION: ";
    cin>>opcion;
    system("pause");
    rlutil::cls();

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
