#include <stdio.h>


int removeDuplicates(int* nums, int numsSize){
	int currentNum = nums[0];
	int dup_num = 0;
	for (int i = 1; i<numsSize; i++){
		if (currentNum == nums[i]){
			dup_num++;
			numsSize--;
			for(int j =i; j< numsSize ;j++){
				nums[j] = nums[j+1];
			}
			i--;
			continue;
		}
		currentNum = nums[i];
	}
	return numsSize;
}

void main(){
	int nums[] = {0,0,0,0,1,1,2,3,4,4,5,5,5,5};
	int result = removeDuplicates(nums,14);
	printf("%d\n", result);
	for(int i =0; i<result; i++){
		printf("%d\n",nums[i]);
	}
	return ;
}