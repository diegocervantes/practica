#include<iostream>
#include<string>
using namespace std;

int main(){
	string x;
	int a;
	char f;
	cout<<"Cual es su nombre: "<<endl;
	cin>>x;
	cout<<"Cuantas letras tiene su nombre: "<<endl;
	cin>>a;
	cout<<"Que letra desea encontrar: "<<endl;
	cin>>f;
	for(int i = 0; i<a; i++){
		if(x[i]==f){
			cout<<"La posicion es: "<<i+1<<endl;
		}

	}


}
