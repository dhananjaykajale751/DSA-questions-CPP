#include<iostream>
using namespace std;
void Missing(int arr[],int n){
		
	for(int i=0;i<n;i++){
	    if(arr[i]!=i+1){
	    	cout<<i+1;
	    	cout<<" is missing";
	    	cout<<endl;
		}

	}

}
int main(){
	int a[]={1,2,4,5};
int n =  sizeof(a)/sizeof(a[0]);
	Missing(a,n);
}