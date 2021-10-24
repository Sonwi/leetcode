#include<iostream>
#include<string>
using namespace std;

string compressStr(string S) {
	string res;
	int i = 0;
	int count = 0;
	int len = S.length();
	int resIndex = 0;
	while (i < len) {
		int j;
		for (j=i; j < len; j++) {
			if (S[j] == S[i]) {
				continue;
			} else {
				break;
			}
		}
		cout<<"j="<<j-i+1<<endl;
		string tmp = S[i] + to_string(j-i);
		res += tmp;
		i += j - i;
	}
	if (res.size() < len) return res;
	else return S;
}

int main() {
	string a = "aabcccccaaa";
	string b = compressStr(a);
	cout<<"res:"<<b<<endl;
	return 0;
}
