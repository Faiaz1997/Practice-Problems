#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
////////////////////////////////////////////////////////////////////
class restaurant
{
	private:
		string dish [10];
		int price [10];
		int num, cost;
	public:
		void inputorder()
		{
			cout<<"Enter number of dishes (<=10): ";
			cin>>num;
			for (int i=0; i<=num-1; i++)
				{
					system("cls");
					cout<<"Enter dish name and price: ";
					cin>>dish[i]>>price[i];
				}
			cout<<endl;
		}
		void calculatebill()
		{
			for (int i=0; i<=num-1; i++)
				cost += price[i];
		}
		void showbill()
		{
			system("cls");
			cout<<setw(15)<<"Dish Name"<<setw(20)<<"Price"<<endl<<endl;
			for (int i=0; i<=num-1; i++)
				cout<<setw(15)<<dish[i]<<setw(20)<<"Rs. "<<price[i]<<endl;
			for(int l=1; l<=45; l++)
				cout<<"-";
			cout<<endl;
			cout<<setw(15)<<"Total Price"<<setw(20)<<cost<<endl<<endl;
		}
};

int main()
{
	restaurant order;
	order.inputorder();
	order.calculatebill();
	order.showbill();
	system("pause");
	return 0;
}
