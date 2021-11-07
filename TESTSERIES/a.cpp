#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int ind=0;
		int eng=0;
		for(int i=0;i<5;i++){
			int temp;
			cin >> temp;
			if(temp == 1){
				ind++;
			}else if(temp == 2){
				eng++;
			}
		}
		if(ind > eng){
			cout << "INDIA" <<endl;
		}else if(ind < eng){
			cout << "ENGLAND" << endl;
		}else{
			cout << "DRAW" << endl;
		}

	}
}
