#include<iostream>
using namespace std;

class data{
	
	private:
	int	car_id;
	char car_company_name[100];
	char car_color[100];
	char car_model[100];
	int car_release_year;
		
	public:
		void read(){
			
		    cout<<"ENTER Car_Id= ";
		    cin>>car_id;
		    cout<<"ENTER Car_Company_Name= ";
		    cin>>car_company_name;
		    cout<<"ENTER Car_Color= ";
		    cin>>car_color;
		    cout<<"ENTER Car_Model= ";
		    cin>>car_model;
		    cout<<"ENTER Car_Release_Year= ";
		    cin>>car_release_year;
		
		}
		void unread(){
			
			cout<<"YOUR VALUE Car_Id= "<<car_id<<endl;
			cout<<"YOUR VALUE Car_Company_Name= "<<car_company_name<<endl;
			cout<<"YOUR VALUE Car_Color= "<<car_color<<endl;
			cout<<"YOUR VALUE Car_Model= "<<car_model<<endl;
			cout<<"YOUR VALUE Car_Release_Year= "<<car_release_year<<endl;
		
		}	
};
main(){
	
	data a,b,c,d,e;
	
	a.read();
	a.unread();
	
	b.read();
	b.unread();
	
    c.read();
	c.unread();
	
    d.read();
	d.unread();
	
	e.read();
	e.unread();	
	
}











