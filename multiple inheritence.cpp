#include<iostream>
using namespace std;
class shopping
{
	public:
	shopping()
	{
		cout<<"flipkart"<<endl;
		cout<<"amazon"<<endl;
		cout<<"snapdeal"<<endl;
		cout<<"myntra"<<endl;
	}
};
class brands: public shopping
{
	public :
		brands()
		{
	cout<<"levis"<<endl;
	cout<<"adidas"<<endl;
}
 };
 class clothes: public shopping
 {
 	public:
 		clothes(){
 		cout<<"jeans"<<endl;
 		cout<<"indowestern"<<endl;
 	}
 };
 int main()
 {
 	brands obj;
 	clothes obj1;
 	return 0;
	 }	
