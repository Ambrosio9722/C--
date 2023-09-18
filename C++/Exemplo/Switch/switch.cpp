# include <iostream>
using namespace std;


int main(){

int num = 10;
switch (num)
{
   case 9:
       cout << "O numero escolhido é o numero 9"<<endl;
       break;
   case 10:
       cout << "O numero escolhido é o numero 10"<<endl;
        break;
   case 11:
       cout << "O numero escolhido é o numero 11"<<endl;
   default:
       cout << "Não sei qual nuimero foi escolhido"<<endl;
}

    return 0;
}