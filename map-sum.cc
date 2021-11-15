#include<bits/stdc++.h>
using namespace std;
/*
	author: alex
	problem number: 677
	level: medium
*/

class MapSum {
	public:
		std::map<string, int> mymap;
		MapSum() {
		}

		void insert(string key, int val) {
			mymap[key] = val;
		}

		int sum(string prefix) {
			int result = 0;
			for (auto& item : mymap) {
				if (item.first.rfind(prefix, 0) == 0) {
					result += item.second;
				}
			}
			return result;
		}
};

int main()
{
	//MapSum* mapSum = new MapSum();
	MapSum mapSum;
	mapSum.insert("apple", 3);  
	mapSum.sum("ap");           // return 3 (apple = 3)
	mapSum.insert("app", 2);    
	cout<<mapSum.sum("ap")<<endl;
	return 0;
}
