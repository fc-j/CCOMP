#include <iostream>
using namespace std; 


int main(){
    int cont =0, numPrim=0, flag=0; 

    cout<<"ingrese num: "; cin>>flag;
        if(flag==1){
        cout<<1;
    }
    for(numPrim;numPrim<flag-1;cont++ ){
        
        numPrim=cont*2+1;
        cout<<numPrim;
        numPrim++;
        if (numPrim<flag-1){
            cout<<","; 
        }
        else{
            break;
        }
    }

}
    