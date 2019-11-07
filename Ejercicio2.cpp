#include <iostream>
using namespace std;

int main(){
    int m[9][5];
    int carnet[8];
    int reves[8];
    int count=0;
    int posicion = 0;
    
    cout<<"Ingrese el carnet."<<endl;
    
    for(int i=0; i<8;i++){
        cout<<"Ingrese el numero en la posicion "<<i+1<<": ";
        cin>>carnet[i];
    }
    
    for(int j=7; j>=0;j--){
        reves[j]=carnet[count];
        count++;
    }
    
    for(int i=0; i<4;i++){
        for(int j=0;j<9;j++){
            if(i%2==0){
                m[j][i]=carnet[j];
            }else{
                m[j][i]=reves[j];
            }
            posicion++;
        }
        m[8][i]=posicion;
    }
    posicion++;
    for(int j=0;j<9;j++){
            m[j][4]=posicion;
            posicion++;
    }
    for(int i=0; i<5;i++){
        for(int j=0;j<9;j++){
            cout<<m[j][i]<<"   ";
        }
        cout<<endl;
    }
    
    return 0;
}
