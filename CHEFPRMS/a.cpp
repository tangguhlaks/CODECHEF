#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	vector<int> prm;
	for(int i=1;i<=200;i++){
		int temp=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				temp+=1;
			}
		}
		if(temp == 2){
			prm.push_back(i);
		}
	}	
	vector<int> bprm;
	for(int j=0;j<prm.size();j++){
		for(int k=j;k<prm.size();k++){
			if(prm.at(j) * prm.at(k) <= 200 && prm.at(j) != prm.at(k)){
				bprm.push_back(prm.at(j) * prm.at(k));
			}
		}
	}
	
	for(int i=0;i<t;i++){
		long n;
		cin >> n;
		string op = "NO";
		for(int j=0;j<bprm.size();j++){
			for(int k=0;k<bprm.size();k++){
				if(bprm.at(j) + bprm.at(k) == n){
					op="YES";
					break;
				}
			}
		}
		cout << op << endl;
	}	

}
