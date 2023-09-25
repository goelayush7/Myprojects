#include<iostream>
using namespace std;
int main() {
	int a ;
	cin >> a;
	int b ; 
	cin >> b; 
	int arr[a][b];
	for(int i = 0 ; i < a ; i++){
		for(int j = 0 ; j < b ; j++){
			cin >> arr[i][j];
		}
	}
	int row = 0;
	int col = 0;
	bool up = true;
	int arr1[a*b];
	int i = 0  ; 
	while(row<a && col<b){
		if(up){while(row>0 && col<b-1){
			arr1[i++]=arr[row][col];
			row--;
			col++;
		}
		arr1[i]=arr[row][col];
		if(col==b-1){
			row++;
		}
		else col++;
		}
		if(!up){
			while(col> 0 && row < a-1){
				arr1[i++]=arr[row][col];
				row++;
				col--;
			}
		arr1[i++] = arr[row][col];
		if(row==a-1){
			col++;
		}
		else row++;
		}
	 up = !up;
	}
	return 0;
}