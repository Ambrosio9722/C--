# include <iostream>

using namespace std;

// função par
 bool par (int num){
     if(num%2==0){
         return true;
     }
     return false;
 }
 //sobrecarga
 bool par (int num, int num2){
     if(num%2==0){
         return true;
     }
     return false;
 }

int main (){
     int  n;

     cout << "Informe um numero"<<endl;
     cin >> n;
     if(par(n)){
        cout <<"O numero "<< n << " eh par."<<endl;
     }
     else{
         cout <<"O numero "<< n << " eh impar."<<endl;
        }
     if(par(n,1)){
        cout <<"Segunda função (sobrecarga)"<<endl;
     }
     else{
         cout <<"Segunda função (sobrecarga)"<<endl;
        }
     
    return 0;
}