#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		long n;
		cin >> n;
		long arrA[n+1],arrB[n+1];
		arrA[0] = 0; arrB[0]=0;
		for(int j=1;j<n+1;j++){
			cin >> arrA[j]; 
		}
		for(int j=1;j<n+1;j++){
			cin >> arrB[j]; 
		}
		long count=0;
		for(int k=1;k<n+1;k++){
		    long aa = arrA[k] -  arrA[k-1];
			if(aa >= arrB[k]){
				count++;
			}	
		}
		cout << count << endl;
	}

}

