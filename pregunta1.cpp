#include <iostream>
using namespace std; 


int main(){
    long long a=5,b=3, c=100, suma=0; 
    for(int i=1; i<c;i++){

        if (i%a==0 && i%b==0){
            suma+=i; 
            cout<<i<<endl; 
        }
    }
    cout<<"la suma es: "<<suma; 
        
    }
    









































