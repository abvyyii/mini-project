#include<iostream>
using namespace std;
int main(){
	int modulo = 19;
	int i,j;
 cout<<"For modulo 19, the multiplicative inverse are:"<<endl; 
 for(i=0; i<modulo; i++){
		for(j=0; j<modulo; j++){
			if((i*j) % modulo == 1){
				cout<<"multiplicative inverse of "<<i<<" is "<<j<<endl;
		
			}
		}
	}
	return 0;
}
