// 2.  Dado um n�mero inteiro positivo n, calcular a soma dos n primeiros n�meros inteiros positivos. 

#include<iostream>

using namespace std;

int main(){
	
	int N, C = 0, T = 0;
	cout<<"Digite um numero positivo: "; cin>>N;
	
	if(N > 0){
	
		for(C = N; C > 0; C--){
			T+=C;
		}
    }
			
    else
     return 0;
	
	cout<<T;
	
	return 0;
}
