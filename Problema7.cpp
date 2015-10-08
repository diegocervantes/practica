#include<iostream>
using namespace std;

int main(){
    int matr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"a. **Matr es igual a "<<**matr << " V" << endl;
    cout<<"b. *(*(matr+1)+2) es igual a "<< *(*(matr+1)+2) << " V" << endl;
    cout<<"c. *(matr[2]+3) es igual a "<< *(matr[2]+3) << " V" << endl;
    cout<<"d. (*(matr+2))[2] es igual a  "<< (*(matr+2))[2] << " V" << endl;
    cout<<"e. *((*matr)+1) es igual a "<< *((*matr)+1) << " F" << endl;
}
