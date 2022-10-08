#include<iostream>
using namespace std;
void average(){
		int temp[7];
	int total =0;
	for(int i=0;i<7;i++){
	cout<<"The temperature of day ";
	cout<<i+1;
	cout<<" is :- ";
	cin>>temp[i];
	}
	for(int i=0;i<7;i++){
	total=total+temp[i];
	}
	int average = total/7;
	cout<<"The average temperature of the week is ";
	cout<<average;
	cout<<" Celcius";
}
int main(){
average();
}