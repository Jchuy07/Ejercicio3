//
// Created by janet on 25/03/2023.
//
#include "iostream"

using namespace std;
void ejercicio1()
{
        int edad;
        cout << "Ingrese su edad" ; cin>> edad;
        if (edad>=18){
            cout << "Usted es mayor de edad ;) " ;
        }
        else{
            cout << "usted es menor de edad (; ";
        }
    }

void ejercicio2(){
        int x, y ;
        cout << "Ingrese primer numero x " ;
        cin>> x ;
        cout << "Ingrese primer numero y  " ;
        cin>> y;
        if (x == y)
            cout << "Los numeros son iguales " ;
        else
        {
            if(x>y)
                cout<<"\n el mayor es:"<<x;
            else
                cout<<"\n el mayor es:"<<y;

        }
        }

void ejercicio3()
{
        int numero;
        printf( "\n   Ingrese un nummero entero: ");
        scanf( "%d", &numero );
        if ( numero % 2 == 0 )
            printf( "\n   Es par" );
        else
            printf( "\n   Es impar" );
}

void ejercicio4()
  {
      int n,i = 0,j,factorial;
      cout<<"Ingrese un numero ";cin>>n;
      while(i <= n){
          if(i == 0){
              factorial = 1;
          }
          else{
              factorial = 1;
              j=1;
              while(j <= i){
                  factorial *= j;
                  j++;
              }
          }
          cout<<"Factorial de "<<i<<": "<<factorial<<endl;
          i++;
      }
 }


void ejercicio5()
{
    int n, i, resultado;
    cout<<"Ingrese un numero mayor que 10 y menor que 30" <<endl;cin>>n;

    if (n>10&&n<30)
    {
        cout<<n<<"Los numero impares son del 1 al"<<n  << "son:" <<endl;
        for (int i = 1; i<=n; ++i){
            resultado = i%2;
            if(resultado!=0){
                cout<<i<<", ";
            }
        }
        cout<<"n";
    }
    else{
        cout<<"error, el numero ingresado debe ser unicamente mayor a 10 menos que 30"<<endl;
    }
}




void ejercicio6()
{
    int n, i, resultado;
    cout << "Ingrese un numero mayor que 10 y menor que 30  " << endl;
    cin >> n;
    if (n>10&&n<30)
    {
        cout << n << " los numero impares   " << n << "     son:   " << endl;
        while	(i <= n){
            resultado = i % 2;
            if (resultado != 0){
                cout << i << ",   ";
            }
            i = i + 1;
        }
        cout << "\n";

    }
    else{
        cout << "error, el numero tiene que ser mayor a 10 y menor que 30" << endl;
    }
}


void ejercicio7()
{
    {
      int dia;
        cout << "Ingrese el dia de la semana " ;
        cin>> dia ;

        switch ( dia )
        {
            case 1 : printf( "\n   Lunes" );
                break;
            case 2 : printf( "\n   Martes" );
                break;
            case 3 : printf( "\n   Miecoles");
                break;
            case 4 : printf( "\n   Jueves" );
                break;
            case 5 : printf( "\n   Viernes" );
                break;
        }
    }
    }