//Calculadora simples 
// Soma= +
// Divisão= -
//Multiplicação= x
// Subtração = /

#include <iostream>
using namespace std;

int main(){

   int num1, num2,resultado;
   char operacao; 
   cout << " | calculadora | "<< endl;
   cout << "    |+|-|x|/| "<< endl;

   cout << "informa o primeiro numero: "<<endl;
   cin >> num1;
   cout << "informe o segundo numero: "<<endl;
   cin >> num2;
   cout << "informe a operação "<< endl;
   cin >> operacao;

   switch (operacao)
   {
   case '+':
    resultado = num1+num2;
    cout << "Resultado: "<< resultado<<endl;
    break;

    case '-':
      resultado = num1-num2;
    cout << "Resultado: "<< resultado<<endl;
    break;

    case 'x':
      resultado = num1*num2;
    cout << "Resultado: "<< resultado<<endl;
    break;
    
    case '/':
      resultado = num1/num2;
    cout << "Resultado: "<< resultado<<endl;
    break;
   
   default:
    cout << "Resultado Invalido!"<<endl;
    break;
   }
   

    return 0;
}



