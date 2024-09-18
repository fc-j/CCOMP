#include<iostream>
using namespace std; 

bool esPrimo(int a ){
    int x=2; 
    if (a<=1){
        false;
    }
    while(x<a){
        if (a%x==0){
            return false;
        }
        x++;
    }
    return true;
}

void imprimirPrimos(int b){
    for(int i=1;i<b;i++){
        if(esPrimo(i)){
            cout<<i<<" "; 
        }
    }
}




int main(){
    imprimirPrimos(100); 

}