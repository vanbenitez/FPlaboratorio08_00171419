#include <iostream>

using namespace std;

int main(){
    int carnet[8];
    int reves[8];
    int count=0;
    
    cout<<"Ingrese el carnet."<<endl;
    
    for(int i=0; i<8;i++){
        cout<<"Ingrese el numero en la posicion "<<i<<": ";
        cin>>carnet[i];
    }
    
    for(int j=7; j>=0;j--){
        reves[j]=carnet[count];
        count++;
    }
    
    for(int j=0;j<=7;j++){
        cout<<reves[j];
    }
    
    return 0;
}

