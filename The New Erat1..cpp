#include<iostream>
using namespace std;

class data{
	private:
	
	char house_detail[100];
	char room_detail[100];

public:
	
	void read(){
		
		cout<<"ENTER HOUSE DETAIL= ";
		cin>>house_detail;
		cout<<"ENTER ROOM DETAIL= ";
		cin>>room_detail;
	}
	void unread(){
		cout<<"YOUR TEXT OF HOUSE DETAIL= "<<house_detail<<endl;
		cout<<"YOUR TEXT OF ROOM DETAIL= "<<room_detail<<endl;
	}

};

main(){
	
	data z;
	
	z.read();
	z.unread();
	
	z.read();
	z.unread();	
}
