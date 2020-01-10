#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double sum = 0;
	double x;
	int i = 0;
	

	while(x!=0){
		
		cout << "Enter x: ";
		cin >> x;
		
		
		if(x == 0){
			cout << "sum = " << sum;
		}else{
			if(x>0){
				sum = sum+x;
			}else{
			;
			}
		}
		i++;			
	}
	
	
	return 0;
}
