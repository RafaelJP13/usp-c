// 3.  Dado um n�mero inteiro positivo n, imprimir os n primeiros naturais �mpares. 

#include<iostream>

using namespace std;


int main(){
	
	int N,C;
	
	cout<<"Digite um numero: "; cin>>N;
	
	if(N > 0){
		
		for(C = 1; C <=N; C+=2){
			
			cout<<C;
		}
	}
	
	else
		return 0;
}
