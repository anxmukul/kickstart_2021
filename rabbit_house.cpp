#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int r,c;
	for(int i=0; i<t; i++){
		cin>>r>>c;
		int arr[r][c];
		for(int j=0; j<r; j++){
			for(int k = 0; k<c; k++){
				cin>>arr[j][k];
			}
		}
		int sum = 0;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				int k = 0;
				if (i - 1 >= 0 && arr[i][j] != 0){
					int k = (arr[i - 1][j] - arr[i][j] );
					if(k<0){
						k = k*(-1);
					}
					if(k>1){
						//sum += (k-arr[i][j]);
						// if(arr[i - 1][j] == 0){
						// 	arr[i - 1][j]++;
						// }
						sum += k-arr[i - 1][j]-1;
						arr[i - 1][j] =  k-arr[i - 1][j]-1;
						
					}
					
				}
				if (i + 1 < r  && arr[i][j] != 0){
					int k =  (arr[i + 1][j]- arr[i][j]);
					if(k<0){
						k = k*(-1);
					}
					if(k>1){
						//sum += (k-arr[i][j]);
						// if(arr[i + 1][j] == 0){
						// 	arr[i + 1][j]++;
						// }
					
 						sum += k-arr[i + 1][j]-1;
						arr[i + 1][j] = k-arr[i + 1][j]-1;
					}
				}
				if (j - 1 >= 0  && arr[i][j] != 0){
					int  k = (arr[i][j - 1]- arr[i][j]);
					if(k<0){
						k = k*(-1);
					}
					if(k>1){
						//sum += (k-arr[i][j]);
						// if(arr[i][j - 1] == 0){
						// 	arr[i][j - 1]++;
						// }
						sum += k-arr[i][j - 1]-1;
						arr[i][j - 1] = k-arr[i][j - 1]-1;
					}
				}
				if (j + 1 < c  && arr[i][j] != 0){
					int k =  (arr[i][j + 1]- arr[i][j]);
					if(k<0){
						k = k*(-1);
					}
					if(k>1){
						// if(arr[i][j + 1] == 0){
						// 	arr[i][j + 1]++;
						// }
						//sum += (k-arr[i][j]);
						sum += k-arr[i][j + 1]-1;
						arr[i][j + 1] =  k-arr[i][j + 1]-1;
 					}	
				}
			}
		}
		cout<<"Case #"<<i+1<<": "<<sum<<endl;
	}
	return 0;
}