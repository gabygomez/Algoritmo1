#include<iostream>

using namespace std;

void IngresarDatos();
int conversion(int Minutos);
int velocidad(int Tiempo);
void mostrarTiempos();

int Tiempo[12];

main(){
    IngresarDatos ();
}

//Los mas rapidos son menor a 3.50 y mostrar promedio de velocidad
void IngresarDatos(){
	int Minutos,Segundos,Acum=0, Acum2=0, S, Cont=0;
	int Tiempo, SegT, V, PromGen, PromMenor;
	
	cout<<" Ingresar Tiempo De Corredores \n ";
	for (int i=1; i<=5; i++){
		cout << " ************************************************** \n ";
		cout << "    >>> CORREDOR  " << i << " <<< \n ";
		cout << " Minutos : " ; cin >> Minutos;
	    cout << "  Segundos : "; cin >> Segundos;
		if(Minutos>=0 && Segundos >=0 || Segundos >=60){
		SegT = conversion(Minutos);
	    Tiempo = SegT+Segundos;
	    S = velocidad(Tiempo);
	    Acum = Acum + S;
	    if (Minutos<=3 && Segundos <=50){
	    	Cont=Cont+1;
	    	Acum2=Acum2+S;
		} 
	    }
	    else {
		i=i-1;
    	}	
    }
	PromGen = Acum / 5;
	if (Acum2>0){
		PromMenor= Acum2 / Cont;
	}
	cout << "************************************ \n";
	cout << " El Promedio General Es : " << PromGen << "\n";
	cout << " El Promedio De Menor Tiempo : "<< PromMenor << "\n";
}

int conversion (int Minutos){
	int SegT;
	
	SegT = Minutos*60;
	return SegT;
}

int velocidad (int Tiempo){
	int V, Distancia=1500;
	
	V = Distancia/Tiempo;
	cout << " Velocidad : "<< V<< " \n";
	return V;	
}

void mostrarTiempo(){
	
	for (int i=1; i<=5; i++){
		
		cout << Tiempo[i];
	}
}


