#include <iostream>
using namespace std;

int main(){

	//decleration array
   int _data[20];//for data input
   int _data_even[20];//even array
   int _data_odd[20];//odd array

   //Enter data by user
   for(int i=0;i<=19;i++){
		cout<<"element number "<<i+1<<endl;
		cin>>_data[i];
	}

   //intialize array by 0
   for(int i=0;i<=19;i++){
	   _data_even[i]=0;
	   _data_odd[i]=0;
	}


    for(int i=0;i<=19;i++)
		if(_data[i]%2==0)
			_data_even[i]=_data[i];//even
		else
			_data_odd[i]=_data[i];//odd
	

	//print data
   cout<<" num || Even ||  odd"<<endl;
      for(int i=0;i<=19;i++)
		cout<<i<<"   "<<" || "<<_data_even[i]<<" ||  "<<_data_odd[i]<<endl;




	  system("pause");
	




}