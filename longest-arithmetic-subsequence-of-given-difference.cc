#include<bits/stdc++.h>
#include <vector>
using namespace std;
/*
	author: alex
	problem number: 1218
	level: medium
*/

int maxlength = 1;
int maxSub(vector<int>& arr, int length, int difference);
int longestSubsequence(vector<int>& arr, int difference){
	int i = 0;
	for (i = 1; i <= arr.size(); ++i) {
		maxSub(arr, i, difference);
	}
	//maxSub(arr, arr.size(), difference);
	return maxlength;
}


int maxSub(vector<int>& arr, int length, int difference){
	if (length == 1) return 1;
	int i=0;
	int res = 0;
	for (i=length-2; i>=0; i--){
		if (arr[i] + difference == arr[length - 1]){
			break;
		}
	}
	if (i == -1) return 1;
	res = maxSub(arr, i+1, difference) + 1;
	//if (i != -1) {
		//int res2 = maxSub(arr, i+1, difference) + 1;
		//res = res>res2?res:res2;	
	//}
	maxlength = res>maxlength? res:maxlength;
	return res;
}

//超时了！！
int main()
{
	vector<int> arr = {3,4,-3,-2,-4};
	int diff = -5;
	int res = longestSubsequence(arr, diff);
	cout<<res<<endl;
	return 0;
}
