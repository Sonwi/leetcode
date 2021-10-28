#include<iostream>
#include <vector>
#include <algorithm>
/*
	author:Alex
	problem number: 869
*/
using namespace std;

bool recorderedPowerOf2(int n) {
	std::vector<int> tmp;
	while(n!=0){
		tmp.push_back(n%10);
		n /= 10;
	}
	sort(tmp.begin(), tmp.end());
	int recordNumber = 0;
	do {
		if (tmp[0] == 0) continue;
		for (int i = 0; i < tmp.size(); ++i) {
			recordNumber = recordNumber * 10 + tmp[i];	
		}
		if ((recordNumber & (recordNumber - 1)) == 0) return true;
		recordNumber = 0;
	} while(next_permutation(tmp.begin(), tmp.end()));
	return false;	
}

int main()
{
	int in;
	cin>>in;
	cout<<recorderedPowerOf2(in)<<endl;
	if ((64 & 63) == 0) cout<<"yes\n";
	return 0;
}
