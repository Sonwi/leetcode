#include<iostream>
#include <set>
#include <vector>
/*
	author:Alex
	problem number: 575
*/
using namespace std;

int distributeCandies(vector<int>& candyType) {
	set<int> candyNum;
	int n = candyType.size();
	int i=0;
	for (i = 0; i < n; ++i) {
		candyNum.insert(candyType[i]);
		if (candyNum.size() >= n/2) {
			return candyNum.size();
		}
	}
	return int(candyNum.size());
}

int main()
{
	std::vector<int> candyType{1,2,1,2,3,3,4,4,5,5,6,6};
	int res = distributeCandies(candyType);
	cout<<res<<endl;
	return 0;
}
