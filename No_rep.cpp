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
    cout<<c<<endl;






}

int main(){
    int y = 4;
    //cout<<"CUANTAS LETRAS TIENE TU CADENA?"<<endl;
    //cin>>y;
    string palabra = "hoho";
    //cout<<"INGRESA LA CADENA"<<endl;
    //cin>>palabra;
    no_repetitions(palabra, y);

}


