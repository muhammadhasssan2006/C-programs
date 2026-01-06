#include <iostream>
using namespace std;

int main(){
	float celcius,fehrin;
	cout<<"================================\n";
	cout<<"      Temperature convertor \n";
	cout<<"================================\n";
	
	cout<<"Enter temperature in celcius";
	cin>>celcius;
	cout<<"Your celcius temperature is:"<<celcius<<endl;
	
	fehrin= (celcius*9.0/5.0)+32;
	
	cout<<"Your Temp in Fahrenheit is:"<<fehrin;
	
}
