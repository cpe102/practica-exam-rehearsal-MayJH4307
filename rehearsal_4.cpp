#include<iostream>
#include<cmath>
using namespace std;

string compress(string aa){
	int bb = aa.size();
	int i =0;
	int n = bb;
	string ee ;
	
	while(i<n){
		if(i%3 == 0){
			ee = ee+aa[i];
		}
		
		i++;
	}
	return ee;
}

int main(){
	string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string ii = compress("ABCD");
    string jj = compress("CPECMU");
    string kk = compress("X");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << ii << "\n"<< jj << "\n" << kk << "\n";
}
