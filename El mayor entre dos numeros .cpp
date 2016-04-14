/* TP #1-Mayaor entre dos numeros
* Ariel Cardozo 150160-4
* 
*/

#include <iostream>

int main() 
	{
	
	
	
	unsigned a,b;
	
	std::cout << "Ingrese un numero: ";
	std::cin >> a;
	std::cout << "Ingrese otro numero: ";
	std::cin >> b;
	
		if(a > b){
			std::cout << "El numer mayor es " << a;
		}
		else{
		if(b > a){
			std::cout << "El numero mayor es "<< b;
		}
		else{
			std::cout << "Los numeros son iguales";
		}
		}
		
		
		
		
		
		
	}
