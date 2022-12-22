#include<iostream>
using namespace std;

class data{
	
	private:
		int a;
		int b;
		
	public:
	    void read(){
	    	
	    	cout<<"ENTER A=";
	    	cin>>a;
	    	cout<<"ENTER B=";
	    	cin>>b;
	    	
}
	    void print(){
	    	    	
	    	cout<<"YOUR VALUE OF A= "<<a<<endl;
	    	cout<<"YOUR VALUE OF B= "<<b<<endl;
		}		
};

main(){
	
	data d;
	
	d.read();
	d.print();
	
}
