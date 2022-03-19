#include <iostream>
using namespace std;
int i;int price=0;
class information
{
protected:
    string name;
public:
    info()
    {
        cout<<"Welcome! Please enter your name: "<<endl;
        cin>>name;
    }
};
class Product:public information
{
protected:
    int i;string n1,n2,n3;
public:
    choice()
    {
    cout<<"What do you want to buy? "<<endl;
    cout<<"1.Shoes\n2.Mobile\n3.Accessories"<<endl;
    cin>>i;
    switch(i)
    {
           case 1:
                {
                cout<<"Select your product: "<<endl;
                cout<<"Product Name                  Price     "<<endl;
                cout<<"1.Nike                        5500 Taka "<<endl;
                cout<<"2.Adidas                      6000 Taka "<<endl;
                cout<<"3.Reebok                      4500 Taka "<<endl;
                cin>>i;
                n1="Nike";n2="Adidas";n3="Reebok";
                if(i==1)
                {
                cout<<"You have selected "<<n1<<endl;
                price+=5500;
                cout<<"your current balance is: "<<price<<endl;
                cout<<"Do you want to add anything else? [1=yes/2=no]"<<endl;
                cin>>i;
                if(i==1)
                choice();
                else
                break;
                }
                else if(i==2)
                {
                cout<<"You have selected "<<n2<<endl;
                price+=6000;
                cout<<"your current balance is: "<<price<<endl;
                cout<<"Do you want to add anything else? [1=yes/2=no]"<<endl;
                cin>>i;
                if(i==1)
                    choice();
                break;
                }
                else if(i==3)
                {
                cout<<"You have selected "<<n3<<endl;
                price+=4500;
                cout<<"your current balance is: "<<price<<endl;
                cout<<"Do you want to add anything else? [1=yes/2=no]"<<endl;
                cin>>i;
                if(i==1)
                 choice();
                break;
                }
                break;
                }
    case 2:
                {
                cout<<"Select your product: "<<endl;
                cout<<"Product Name                  Price      "<<endl;
                cout<<"1.Huawei                      25500 Taka "<<endl;
                cout<<"2.Oppo                        36000 Taka "<<endl;
                cout<<"3.One Plus                    64500 Taka "<<endl;
                cin>>i;
                n1="Huawei";n2="Oppo";n3="One Plus";
                if(i==1)
                {
                cout<<"You have selected "<<n1<<endl;
                price+=25500;
                cout<<"your current balance is: "<<price<<endl;
                cout<<"Do you want to add anything else? [1=yes/2=no]"<<endl;
                cin>>i;
                if(i==1)
                choice();
                else
                break;
                }
                else if(i==2)
                {
                cout<<"You have selected "<<n2<<endl;
                price+=36000;
                cout<<"your current balance is: "<<price<<endl;
                cout<<"Do you want to add anything else? [1=yes/2=no]"<<endl;
                cin>>i;
                if(i==1)
                    choice();
                break;
                }
                else if(i==3)
                {
                cout<<"You have selected "<<n3<<endl;
                price+=64500;
                cout<<"your current balance is: "<<price<<endl;
                cout<<"Do you want to add anything else? [1=yes/2=no]"<<endl;
                cin>>i;
                if(i==1)
                 choice();
                break;
                }
                break;
                }
                case 3:
                {
                cout<<"Select your product: "<<endl;
                cout<<"Product Name                  Price     "<<endl;
                cout<<"1.Samsung 32gb Memory         550 Taka "<<endl;
                cout<<"2.Logitech Speaker            6500 Taka "<<endl;
                cout<<"3.Beats Earphone              4000 Taka "<<endl;
                cin>>i;
                n1="Samsung 32gb Memory";n2="Logitech Speaker";n3="Beats Earphone";
                if(i==1)
                {
                cout<<"You have selected "<<n1<<endl;
                price+=550;
                cout<<"your current balance is: "<<price<<endl;
                cout<<"Do you want to add anything else? [1=yes/2=no]"<<endl;
                cin>>i;
                if(i==1)
                choice();
                else
                break;
                }
                else if(i==2)
                {
                cout<<"You have selected "<<n2<<endl;
                price+=6500;
                cout<<"your current balance is: "<<price<<endl;
                cout<<"Do you want to add anything else? [1=yes/2=no]"<<endl;
                cin>>i;
                if(i==1)
                    choice();
                break;
                }
                else if(i==3)
                {
                cout<<"You have selected "<<n3<<endl;
                price+=4000;
                cout<<"your current balance is: "<<price<<endl;
                cout<<"Do you want to add anything else? [1=yes/2=no]"<<endl;
                cin>>i;
                if(i==1)
                 choice();
                break;
                }
                break;
                }

        }
        }





};
class removeproduct:public Product
{
protected:
     int i;string n1,n2,n3;
public:



};
int main()
{
information i1;
i1.info();
Product p1;
p1.choice();
}
