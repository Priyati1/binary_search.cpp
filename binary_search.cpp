#include<iostream>
using namespace std;
// int bs(int *arr,int n,int key){
// 	int s=0;
// 	int e=n-1;
// 	while(s<=e){
// 		int mid=(s+e)/2;
// 		if(arr[mid]==key){
// 			return mid;
// 		}
// 		else if(arr[mid]>key){
// 			e=mid-1;
// 		}
// 		else{
// 			s=mid+1;
// 		}
	
	
// }
// return -1;
// }
// int main(){
// 	int arr[100];
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int key;
// 	cin>>key;
// 	int ans=bs(arr,n,key);
// 	if(ans==-1){
// 		cout<<"No found"<<endl;
// 	}
// 	else{
// 		cout<<"Key found at"<<" "<<ans<<endl;
// 	}

// 	return 0;
// }
//------------------------RECURSION------------------------
int binary_serach_rec(int *arr,int key,int s,int e){
	//base case
	if(s>e){
		return -1;
	}
	//recursive case
	int mid=(s+e)/2;
		if(arr[mid]>key){
			return binary_serach_rec(arr,key,s,mid-1);
			}
		else if(arr[mid]==key){
			return mid;
		}		
		else{
			return binary_serach_rec(arr,key,mid+1,e);
		}

}
int main(){
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	binary_serach_rec(arr,key,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}