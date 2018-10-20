// 4.  Dados um inteiro x e um inteiro não-negativo n, calcular x n. 

#include<iostream>

using namespace std;

int main(){
	
	int A = 0, B = 0, C = 1, T = 1;
	
	cout<<"Digite um numero: "; cin>>A;
    cout<<"Digite um numero: "; cin>>B;
    
    if(B > 0){
    	
    	for(C; C <=B; ++C){
    		
    		T *= A;
    
		}
    	
	}
	
	cout<<T;
	
	return 0;
}
