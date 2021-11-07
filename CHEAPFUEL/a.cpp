#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,aa,bb,m;
		cin >> a >> b >> aa >> bb >> m;
		for(int i=0;i<m;i++){
			a+=aa;
			b+=bb;
		}
		if(a < b){
			cout << "PETROL" << endl;
		}else if(a > b){
			cout << "DIESEL" << endl;
		}else{
			cout << "SAME PRICE" << endl;
		}					
	}
}
