#include <bits/stdc++.h>
using namespace std;

vector<int> countsort(vector<int>&inputArray){
	int n=inputArray.size();
	
	int m=0;
	
	for(int i=0; i<n; i++){
		m=max(m,inputArray[i]);
	}
	vector<int>countArray(m+1,0);
	
	for(int i=0; i<n; i++){
		countArray[inputArray[i]]++;
	}
	
	for(int i=1; i<=m; i++){
		countArray[i]+=countArray[i-1];
	}
	
	vector<int>outputArray(n);
	
	for(int i=n-1; i>=0; i--){
		outputArray[countArray[inputArray[i]]-1]=inputArray[i];
		countArray[inputArray[i]]--;
	}
	return outputArray;
}
int main() {
	vector<int> inputArray = { 4, 3, 12, 1, 5, 5, 3, 9 };
 
    // Output array
    vector<int> outputArray = countsort(inputArray);
 
    for (int i = 0; i < inputArray.size(); i++)
        cout << outputArray[i] << " ";
 
    return 0;
}
