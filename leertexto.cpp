#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fin("datos.txt");

    string nombre;
    int edad, codigo;
    fin >> nombre >> edad >> codigo;
    cout << "Tu nombre es " << nombre << " y tienes "
    << edad <<" anios y tu codigo es " << codigo << endl;
}
