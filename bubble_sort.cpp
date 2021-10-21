#include  <iostream>
using namespace std;

void bubble_sort(int arr[], int len){
	int i,j,temp;
	for(i=0;i<len-1;i++){
		for(j=0;j< len-1;j++){
			if (arr[j] > arr[j+1]){
			   temp = arr[j];
			   arr[j] = arr[j+1];
			   arr[j+1] = temp;
			}
		}
	}
}
int main(){
	int arr[] = {1,7,9,5,2,4,3};
	int len = (int) sizeof(arr) / sizeof(*arr);
	bubble_sort(arr,len);
	int i;
	for(int i=0;i<len;i++){
		cout  << arr[i] << " ";
	}
	
}

