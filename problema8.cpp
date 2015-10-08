#include <ctype.h>
#include <iostream>

using namespace std;

void mayus(char *c){
    int i = 0;
    while(*(c+i)!= '\0'){
        if(*(c+i) == ' '){
            *(c+i+1) = toupper(*(c+i+1));
        }
        i+=1;

    }
    cout << c << endl;
}


int main(){
    char c[] = "hola diego cervantes";
    char *ptr = c;
    mayus(c);

    return 0;
}
