//Ejercicio 65: Convertir dos cadenas de minuscula a MAYUSCULAS. compararlas, y decir si son iguales o no:



#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char cad1[]= "hola", cad2[]="hola";
	
	strupr(cad1);
	strupr(cad2);
	
	
	if(strcmp(cad1,cad2)==0){
		cout<<"las dos cadenas son iguales"<<endl;
		
	}else{
		cout<<"las cadenas son diferentes"<<endl;
		
	}
	
	getch();
	return 0;
}
