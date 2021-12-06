#include<iostream>
using namespace std;

int main(){

int i, j, temp, maks, Imaks;
int L[5]={2,3,1,5,4};

cout<<"data awal: 2 3 1 5 4"<<endl;
for (i=4;i>=1;i--){
	Imaks=0;
	maks=L[0];
	for (j=1;j<=i;j++)
	{
	if (L[j]>maks)
	{
	Imaks=j;
	maks=L[j];
	}
}
temp=L[i];
L[i]=maks;
L[Imaks]=temp;
} 
cout<<"data setelah terurut secara ascending:"<<" ";
	for (i=0;i<=4;i++){
		cout<<L[i]<<" ";
	}
return 0;
}
