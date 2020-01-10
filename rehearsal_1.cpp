#include<iostream>
using namespace std;

int main()
{
	string name[1];
	double a[1];
	
	int i = 0;
	while(i<1){
		cout << "What is your name?: " ;
		cin >> name[i];
		
		cout << "What is your GPA?: ";
		cin>> a[i];
		
		if(a[i] >= 3.50){
			cout << name[i] << " InW Jrim Jrim!!!";
			
		}else{
			cout << "Try harder, " << name[i] << "!!!";
		}
		i++;
	}
	return 0;
}
