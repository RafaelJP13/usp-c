// 1.  Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados. 
#include<iostream>

using namespace std;

int main(){
	
	int N = 0;
	bool D;
	
	do{
		cout<< "Digite um numero: "; cin>>N;
		if(N > 0){
			cout<<"O quadrado de "<<N<<"- > "<< N*N<<endl;
		}
		else{
			
			return 0;
		}
			
		cout<<"Deseja continuar? [1] - S [0] - N:\n"; cin>>D;
	}
	
	while(D);
	
	return 0;
}
