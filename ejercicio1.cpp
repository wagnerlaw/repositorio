#include <iostream>
using namespace std;
void sumar();
void dividir();
void multiplicar();
void restar();
int a,b,f;
float r;
int main(){
	cout<<"Ingrese que tipo de operacion desea realizar: "<<endl;
		cout<<"1# Suma\n";
		cout<<"2# Resta\n";
		cout<<"3# Multiplicacion\n";
		cout<<"4# Division\n";
		cin>>f;
		system("cls");
		if(f==1){
			sumar();
		}else if (f==2){
			restar();
		}else if(f==3){
			multiplicar();
		}else if(f==4){
			dividir();
		}
}
void restar(){
	cout<<"Ingrese primer valor:"<<endl;
	cin>>a;
	cout<<"Ingrese segundo valor:"<<endl;
	cin>>b;
	system("cls");
	if(b>a){
		cout<<"La operacion es negativo: "<<endl;
		r=a-b;
		cout<<"El resultado de su operacion es: "<<r<<endl;
	}else{
		r=a-b;
		cout<<"El resultado de su operacion es: "<<r<<endl;
	}
}
void sumar(){
	cout<<"Ingrese primer valor:"<<endl;
	cin>>a;
	cout<<"Ingrese segundo valor:"<<endl;
	cin>>b;
	system("cls");
	r=a+b;
	cout<<"El resultado de su operacion es: "<<r<<endl;
	}
void multiplicar(){
	cout<<"Ingrese primer valor:"<<endl;
	cin>>a;
	cout<<"Ingrese segundo valor:"<<endl;
	cin>>b;
	system("cls");
	r=a*b;
	cout<<"El resultado de su operacion es: "<<r<<endl;
	}
void dividir(){
	cout<<"Ingrese primer valor:"<<endl;
	cin>>a;
	cout<<"Ingrese segundo valor:"<<endl;
	cin>>b;
	system("cls");
	if(b==0){
		cout<<"La operacion no es posible"<<endl;
	}else{
		r=a/b;
		cout<<"El resultado de su operacion es: "<<r<<endl;
	}
}
