#include<iostream>
using namespace std;


void copiar(){
    int j=0;
    char c[30];
    char p[30];
    cout<<"Ingrese la cadena que desea copiar"<<endl;
    cin>>c;
    while(c[j]!='\0'){
        p[j]=c[j];
        j+=1;
    }
    cout<<p<<endl;

}

void juntar(char c[], char p[],int x, int y){
    char juntos[x+y];
    for(int i=0; i<x; i++){
        juntos[i]=c[i];
    }
    for(int j=0; j<y; j++){
        juntos[x+j]=p[j];
    }
    juntos[x+y]='\0';
    cout << juntos << endl;
}

int longcad(char c[]){
    int j=0, cont=0;
    while(c[j]!='\0'){
        j+=1;
        cont+=1;
    }
    return cont;
}

void comparar(char c[], char p[]){
    int cont=0;
    if(longcad(c)!=longcad(p)){
        cout<<"Las cadenas son de diferente tamano "<<endl;
        return;
    }
    for(int i = 0; i<longcad(c); i++){
        if(c[i]==p[i]){
            cont+=1;
        }
    }
    if(cont==longcad(c)){
        cout<<"Son iguales"<<endl;
    }
    else{cout<<"No son iguales"<<endl;}

}


int main(){
    int x;
    cout<<"Que es lo que desea hacer?"<<endl;
    cout<<"Presione 1 para copiar una cadena, 2 para juntar dos cadenas"<<endl;
    cout<<"3 para la longitud de la cadena, 4 para comparar si dos cadenas son iguales y 0 para salir"<<endl;
    cin>>x;
    if(x==1){
        copiar();
        return 0;
    }
    if(x==2){
        int z,y;
        cout<<"De que tamano son sus cadenas 1 y 2"<<endl;
        cin>>z>>y;
        char c[z], p[y];
        cout<<"Ingrese dos cadenas"<<endl;
        cin >> c >> p;
        juntar(c,p,z,y);
        return 0;
    }
    if(x==3){
        char c[30];
        cout<<"Ingrese una cadena"<<endl;
        cin>>c;
        cout<<longcad(c);
        return 0;
    }
    if(x==4){
        char c[30], p[30];
        cout<<"Ingrese dos cadenas"<<endl;
        cin >> c >> p;
        comparar(c,p);
        return 0;
    }



}
