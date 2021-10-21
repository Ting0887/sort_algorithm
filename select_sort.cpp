#include<iostream>

using namespace std;


void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int a[], int len){
	int i,j,temp;
	
	for(i=0;i<len-1;i++){
		int min = i;
		for(j=i+1;j<len;j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		if(min != i){
			/*
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
			*/
			swap(&a[min], &a[i]);
		}
	}
}



int main(){
	int arr[] = {1,7,9,5,2,4,3};
	int len = (int)sizeof(arr)/sizeof(*arr);
	selection_sort(arr,len);
	int i;
	for(i=0;i<len;i++){
		cout << arr[i] << " ";
	}
}
