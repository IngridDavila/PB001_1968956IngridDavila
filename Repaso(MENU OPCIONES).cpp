#include <iostream>
using namespace std; 
int op;
int confirmar;
int ope;
char titulo[100];
char resena[150];
int menu;
int precio;
int main()
{
cout<<"Bienvenidos a pagina de videojuegos 99"<<endl;
cout<<"Seleccione la opcion deseada"<<endl;
do{
    cout<<"1.-COMPRA"<<endl;
    cout<<"2.-VENTA"<<endl;
    cout<<"3.-RESEÑAS"<<endl;
    cin>>op;
switch(op)
{
case 1:
    cout<<"Ingrese el titulo a comprar"<<endl;
    cin>>titulo;
    cout<<"Selecciona metodo de pago"<<endl;
    cout<<"1.-Efectivo"<<endl;
    cout<<"2.-Tarjeta"<<endl;
    cin>>ope;
    switch(ope){
    case 1:
    cout<<"Pague en la sucursal"<<endl;
    break;
    case 2:
    cout<<"Deposite en la siguiente cuenta 123456789"<<endl;
    break;
    }
    cout<<"¿Desea regresar al menu?"<<endl<<"1_si"<<endl<<"2_no"<<endl;
		cin >> menu;
		break;
case 2:
    cout<<"Objeto a vender"<<endl;
    cin>>titulo;
    cout<<"Esta deacuerdo que la tienda se quedara con un 20% de comision"<<endl;
    cout<<"1.-Si"<<endl;
    cout<<"2.-No"<<endl;
    cin>>ope;
    switch(ope){
    case 1:
    cout<<"Ingrese el costo del producto"<<endl;
    cin>>precio;
    break;
    case 2:
    cout<<"Gracias"<<endl;
    break;
    }
    cout<<"¿Desea regresar al menu?"<<endl<<"1_si"<<endl<<"2_no"<<endl;
		cin >> menu;
		break;
case 3:
    cout<<"Ingrese el titulo de la resena"<<endl;
    cin>>titulo;
    cout<<"Ingrese su resena"<<endl;
    cin>>resena;
    cout<<"¿Desea ingresar otra resena?Si es asi presione 1, sino otro numero"<<endl;
    cin >> confirmar;
   if (confirmar == 1) 
		{
			cout<<"Ingrese el titulo de la resena"<<endl;
            cin>>titulo;
            cout<<"Ingrese su resena"<<endl;
            cin>>resena;
            cout<<"¿Desea ingresar otra resena?Si es asi presione 1, sino otro numero"<<endl;
    cin >> confirmar;{
            if (confirmar == 1) {
             cout<<"Ingrese el titulo de la resena"<<endl;
            cin>>titulo;
            cout<<"Ingrese su resena"<<endl;
            cin>>resena;
    }
            else{
                cout<<"¿Desea regresar al menu?"<<endl<<"1_si"<<endl<<"2_no"<<endl;
		        cin >> menu;
		}
		break;
    }
		}else
		{
		cout<<"Gracias por tu aporte"<<endl;
		cout<<"¿Desea regresar al menu?"<<endl<<"1_si"<<endl<<"2_no"<<endl;
		cin >> menu;
		}
		break;
        cout<<"¿Desea regresar al menu?"<<endl<<"1_si"<<endl<<"2_no"<<endl;
		cin >> menu;
}
}
    while(menu==1);
   return 0;
}
   
    
