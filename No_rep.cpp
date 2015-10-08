#include<iostream>
#include<string>
using namespace std;

void no_repetitions(string c, int tam){
    int z = 0;
    int i = z+1;
    while(z<tam){

        for(i; i<tam; i++){
            cout << c << endl;
            if(c[z]==c[i]){
                c.erase(i);
                tam-=1;
            }

        }
        z+=1;
        i=z+1;

    }







}

int main(){
    int y = 5;
    //cout<<"CUANTAS LETRAS TIENE TU CADENA?"<<endl;
    //cin>>y;
    string palabra = "hohoh";
    //cout<<"INGRESA LA CADENA"<<endl;
    //cin>>palabra;
    no_repetitions(palabra, y);

}


