#include<iostream>
using namespace std;

//if - else - elif
int main(){
    int a = 3;
    int b = 4;
    int c = 4;

    //condicion if - else
    if(a>b){ //si condicional
        cout<<"Mayor es: "<<a<<endl;
    }
    else{ //caso contrario
        cout<<"Mayor es: "<<b<<endl;
    }

    //condicion if - elif - else
    if(b>c){ //si condicional
        cout<<"El mayor es: "<<b<<endl;
    }
    elif(b<c){ //caso contrario si condicional
        cout<<"El mayor es: "<<c<<endl;
    }
    else{ //caso contrario
        cout<<"Son iguales: "<<b<<" "<<c<<endl;
    }

    //fin de programa
    return 0;
}
