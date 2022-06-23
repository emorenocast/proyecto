#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;
    
    system("cls");
    cout<<"BIENVENIDO A LOS JUEGOS";

    while (true){
        system ("csl");

        cout << "**" << endl;
        cout << "MENU" << endl;
        cout << "**" << endl;
        
        cout << endl;
        cout << "1 - STARTSHIP" << endl;
        cout << "2 - SNAKE" << endl;
        
        cout << "0 - SALIR" << endl;
        cout << "INGRESE UNA OPCION" << endl;
        cin>>opcion;

        if (opcion ==0){
            break;
        }
        
        switch (opcion)
        {
            case 1: 
             {
             	 
                 system("cls]");
                  // cout <<" ESTAS EN EL JUEGO STARSHIP" << endl;
                  // system("pause");
                 starShip();
                 break;
             }
            case 2:  
             {
                system("cls]");
                 // cout <<" ESTAS EN EL JUEO SNAKE" << endl;
                 // system("pause");
                snake();
                break; 
             }
        default:
            {
                 cout << "INGRESE UNA OPCION VALIDA (0, 1, 2)" << endl;
                 system ("pause");
                 break;
             }
        }
        cout << endl; 
        cout << "SALISTE DEL SISTEMA";
         return 0;
    }
}