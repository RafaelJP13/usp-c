// 5.  Uma loja de discos anota diariamente durante o mês de março a quantidade de discos vendidos. Determinar em que dia desse mês ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia. 

#include<iostream>

using namespace std;

int main(){
	
	int Q = 0, C = 0, M = 0, T = 0, D = 0;
	
	for(C; C < 5; ++C){
		
		cout<<"Digite a quantidade de discos vendidos hoje: "; cin>>Q;
		
		if(C == 0){
			
			M = Q;
		}
		
	    else if(Q > M){
			
			M = Q;	
			D = C;
		}
		
		T+= M;
		
		cout<<M<<endl;
	}
	
	cout<<"Vendido: "<<T<<endl;
	cout<<"    Dia: "<<D<<endl;
	
	return 0;
}
