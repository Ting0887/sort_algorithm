#include<iostream>
using namespace std;


void insertion_sort(int arr[],int len){
	int i,j,temp;
	for(i=1;i<len;i++){
		temp = arr[i];
		for(j=i;j>0 && arr[j-1] > temp;j--){
			arr[j] = arr[j-1];
		}
		arr[j] = temp;
	}
}

int main(){
	int arr[] = {1,7,9,5,2,4,3};
	int len = (int) sizeof(arr)/sizeof(*arr);
	insertion_sort(arr,len);
	
	for(int i=0; i<len; i++){
		cout << arr[i] << " ";
	}
}


