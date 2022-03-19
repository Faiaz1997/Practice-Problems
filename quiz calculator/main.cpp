#include <iostream>
using namespace std;

class QuizCalculation
{
protected:
    int id;float quiz1,quiz2,bestone;
    string name;
public:

    setvalues()
    {
        cout<<"input name"<<endl;
        cin>>name;
        cout<<"input id"<<endl;
        cin>>id;
        cout<<"input quiz1 marks"<<endl;
        cin>>quiz1;
        cout<<"input quiz2 marks"<<endl;
        cin>>quiz2;
    }
    bestquiz()
    {
        if(quiz1>quiz2)
        {
            bestone=quiz1;
        }    else
            bestone=quiz2;

      cout<<" best one: "<<bestone;
    }
    print()
    {
        cout<<"name: "<<name <<" id: "<<id ;
    }

};

int main()
{
QuizCalculation q1;
q1.setvalues();
q1.print();
q1.bestquiz();
}
