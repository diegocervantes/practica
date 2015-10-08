#include<iostream>

using namespace std;

int factorial(int x){
    int fact=1;
    for(int i=x; i>1; i--){
        fact*=i;
    }
    return fact;
}


int main(){
    int f;
    cout << "Ingresa el numero para la factorial: " << endl;
    cin >> f;
    cout << "SU FACTORIAL ES " << factorial(f) << endl;

}
