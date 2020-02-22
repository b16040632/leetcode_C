#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
	int profit = 0;

	vector<int>::iterator v = prices.begin();
	while(v!= prices.end()){
		if(v+1 != prices.end()){
			if (*v < *(v+1)){
				profit+=*(v+1) - *v;
			}

		}
		v++;
	}
	return profit;
}

int main(){
	vector<int> vec;
	cout << "vector size:" << vec.size() << endl;

	for(int i=0;i<5;i++){
		vec.push_back(i);
	}

	cout << "extended vector size:" << vec.size() << endl;


	vector<int>::iterator v = vec.begin();
	while( v != vec.end()) {
    	cout << "value of v = " << *(v+2) << endl;
    	v++;
   }
	
}