#include<iostream>
#include<vector>

using namespace std;

void retate(std::vector<int> nums, int k){
	/*while(k>0){
		std::vector<int>::iterator v = nums.end();
		v--;
		int temp = *v; 
		while(v!= nums.begin()){
			*v = *(v-1);
			v--;
		}
		*v = temp;
		while(v!=nums.end()){
			//cout<<*v<<endl;
			v++;
		}
		k--;
	}*/

	std::vector<int>::iterator b_iterator = nums.begin();
	std::vector<int>::iterator e_iterator = nums.end();
	e_iterator--;
	int temp;
	for(int i =0;i < nums.size()/2;i++){
		temp = *b_iterator;
		*b_iterator = *e_iterator;
		*e_iterator = temp;
		b_iterator++;
		e_iterator--;
	}


	b_iterator = nums.begin();
	e_iterator = nums.begin()+k-1;
	for(int i =0;i < k/2;i++){
		temp = *b_iterator;
		*b_iterator = *e_iterator;
		*e_iterator = temp;
		b_iterator++;
		e_iterator--;
	}

	b_iterator = nums.begin()+k;
	e_iterator = nums.end()-1;
	for(int i =0;i < (nums.size() - k)/2;i++){
		temp = *b_iterator;
		*b_iterator = *e_iterator;
		*e_iterator = temp;
		b_iterator++;
		e_iterator--;
	}

	std::vector<int>::iterator v = nums.begin();
	while(v!=nums.end()){
		cout<<*v<<endl;
		v++;
	}


}

int main (){
	std::vector<int> vec;
	for (int i=0;i<9;i++){
		vec.push_back(i);
	}
	retate(vec,4);
}