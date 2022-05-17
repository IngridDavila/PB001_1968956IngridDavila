#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>
#include<stdlib.h>
#include <vector>

using namespace std;

void Alta();
void listas();
void archivos();
void eliminar();
void modificar();
int alta, *a, * subtotal,*numc, * iva, * total, *b, * hora;
int opc;
string * nombre;
string * desc;
string * med;
int main()
{
    do{
	int op;
	cout << "Bienvenido a la Clinica 1300Smiles" << endl;
	cout << "Selecione la opcion deseada:" << endl;
	cout << "[1]Dar de alta una cita" << endl;
	cout << "[2]Modificar cita" << endl;
	cout << "[3]Eliminar cita" << endl;
	cout << "[4]Lista de citas vigentes" << endl;
	cout << "[5]Limpiar pantalla" << endl;
	cout << "[6]Generar archivo" << endl;
	cout << "[7]salir" << endl;
	cin >> op;

	switch (op)
	{
	case 1:
		Alta();
		return main();
		break;

	case 2:
		modificar();
		return main();
		break;

	case 3:
		eliminar();
		return main();
		break;


	case 4:
		listas();
		return main();
		break;

	case 5:
		system("cls"); //system("clear");
		return main();
		break;

	case 6: 
		archivos();
		return main();
		break;

	case 7: 
		return EXIT_SUCCESS;
		
	default: cout << "Usted ha ingresado una opción incorrecta"<<endl;
	}
	cout << "Quieres regresar al menu?" << endl << "Presiona 1 para regresar, 2 para salir" << endl;
	cin >> opc;

	} while(opc == 1);

	return 0;
}


void Alta()
{ 
	cout << "Digite la cantidad de citas que desea dar de alta" << endl;
	cin >> alta;
	nombre = new string [alta];
	b = new int[alta];
	total = new int[alta];
	a = new int[alta];
	hora = new int[alta];
	subtotal = new int[alta];
	desc = new string [alta];
    med = new string [alta];
    numc = new int[alta];
	for (int i = 0;i < alta;i++)
	{
	    cout << "Ingresa el numero de la cita" << endl;
		cin >> numc[i];
	    while (getchar() != '\n'); 
        cout << "Ingrese el nombre del paciente" << endl; 
		getline(cin, nombre[i]); 
		do{
		cout << "Ingrese la hora del tratamiento (En formato de 24 horas)" << endl;
		cin >> hora[i];
		if (hora[i] >= 25)
		{
			cout << "La hora no es valida." << endl;
		}
		} while (hora[i] >= 25);
		while (getchar() != '\n');
        cout << "Ingrese el nombre del medicamento" << endl; 
		getline(cin, med[i]); 
		cout << "Ingrese la descripcion del tratamiento" << endl; 
		getline(cin, desc[i]); 
		cout << "Ingrese precio" << endl;
		cin >> a[i];
		cout<<"Ingrese la cantidad de tratamiento"<<endl;
		cin>>b[i];
		subtotal[i] = b[i] * a[i];
		total[i] = subtotal[i] + (subtotal[i] * 0, 16);
		cout << "El total es de " << total[i] << endl;
	}
}

void listas()
{
	for (int i = 0;i < alta;i++)
	{ 
		if (b[i] == 0)
		{
			cout << "REGISTRO ELIMINADO" << i + 1<<endl;
		}
		else
		{
			cout << "Cita " << i + 1 << endl;
			cout << nombre[i] << endl;
			cout << hora[i] << endl;
			cout << med[i] << endl;
			cout << desc[i] << endl;
			cout << total[i] << endl;
		}
	}
}

void archivos()
{
	ofstream archivo; 
	string nombrearchivo;
	int texto;
	string texto2;

	nombrearchivo = "altascita";

	archivo.open(nombrearchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		cout << "ERROR NO SE PUDO CREAR EL ARCHIVO";
		exit(1);
	}

	archivo << "Nombre" << "\t";
	archivo << "Medicamento" << "\t";
	archivo << "Descripcion" << "\t";
	archivo << "Precio" << "\t";
	archivo << "Cantidad" << "\t";
	archivo << "Subtotal" << "\t";
	archivo << "Total" << "\n";

	for (int i = 0;i < alta;i++)
	{
		if (b[i] == 0)
		{

		}
		else
		{
			texto2 = nombre[i];
			archivo << texto2 << "\t" << "\t";
			texto2 = med[i];
			archivo << texto2 << "\t" << "\t";
			texto2 = desc[i];
			archivo << texto2 << "\t " << "\t";
			
			texto = a[i];
			archivo << texto << "\t " << "\t";
			texto = b[i];
			archivo << texto << "\t " << "\t";
		    archivo << texto << " ";
		    texto = total[i];
		    archivo << texto << " ";
		}
	}


	archivo.close();
}

void eliminar()
{
	int j;
	cout << "Ingrese el  registro a eliminar";
	cin >> j;
	j = j - 1;
	for (int i = j;i == j;i++)
	{
		cout << "Eliminando registro" << j + 1 << endl;
		
		nombre[i] = " ";
		hora[i] = 0;
		med[i] = " ";
		desc[i] = " ";
		a[i]= 0;
		b[i]= 0;
		total[i] = 0;
	}
}

void modificar()
{
    int i;
	int j, opcion;
	 cout << "ingrese el numero registro a modificar";
	 cin >> j;
	 j = j - 1; 
	cout << "Selecione la opcion deseada:" << endl;
	cout << "[1]Ingresar el nombre" << endl;
	cout << "[2]Ingresar la hora" << endl;
	cout << "[3]Ingresar el medicamento" << endl;
	cout << "[4]Ingresar la descripcion" << endl;
	cout << "[5]Ingresar el preio" << endl;
	cout << "[6]Ingresar la cantidad del tratamiento"<<endl;
	cin >> opcion;

	 switch (opcion)
	 {
	case 1:
		 for (i = j;i == j;i++)
		 {
			 while (getchar() != '\n'); 
			 cout << "Ingrese el nombre" << endl;
			 getline(cin, nombre[i]);
		 break;
		 
	case 2:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese el nuevo horario." << endl;
			cin >> hora[i];
		}
		break;

	case 3:
		 for ( i = j;i == j;i++)
		 {
			 while (getchar() != '\n'); 
			 cout << "Ingrese el medicamento" << endl;
			 getline(cin, med[i]);
		 }
		 break;

	case 4:
	for (i = j;i == j;i++)
		 {
			 while (getchar() != '\n'); 
			 cout << "Ingrese la descripcion" << endl;
			 getline(cin, desc[i]);
		 }
		 
	case 5:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese el precio" << endl;
			cin >> a[i];
		}
		break;

	case 6:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese la cantidad del tratamiento" << endl;
			cin >> b[i];
		}
		break;
		
	default:
		cout << "La opcion no es valida." << endl;
	 }
	 
	 
}
			
}
