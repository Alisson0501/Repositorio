#include <iostream>

//Definir namespace
using namespace std;

//definir las clases
class calculadora {
	//definir metodos publicos
	public:
		int calcular(int, char,int)	;		
};
int main(){
	//definir var,iables
	char operador;
	int numero1, numero2, resultado;
	calculadora objCalculadora;
	
	//solicitar los valores
	cout<<"ingrese los valores por ejemplo (1+1)" << endl;
	cin >> numero1 >>operador >> numero2;
	
	//se retorna en resultado la operacion del objeto
	resultado = 	objCalculadora.calcular(numero1,operador,numero2);
	cout<<"Este resultado es " <<  resultado << endl;
}
// define metodo pibloco de la clase
int calculadora:: calcular(int intNumero1, char charOperador, int intNumero2){
	switch(charOperador){
		case '+':
			return intNumero1 + intNumero2;
		case '-':
			return intNumero1 - intNumero2;
		case '*':
			return intNumero1 * intNumero2;
		case '/':
			if (intNumero2 == 0 )
			{
				cout<<"El número denominador es invalido";
			}
			else  return intNumero1 / intNumero2;

		default:
		    return 0;				
			}
		}
	



