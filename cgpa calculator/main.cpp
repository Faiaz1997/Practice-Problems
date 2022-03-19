#include <iostream>
using namespace std;
int main()

{
    cout<<"                                                   CGPA CALCULATOR                                            "<<endl;
    cout<<endl;
    cout<<endl;int subno,cre,i,j,sem,sg;
   int marks[1000],credit[1000];float gp[1000];
   float tg=0;
   float cg=0;
   float cr=0;

  cout<<"How many semesters GPA do you want to calculate?"<<endl;
   cin>>sg;
   cout<<endl;
   for (j=1;j<=sg;j++)
   {
   cout<<"input total no of courses for "<<j<<" no semester"<<endl;
   cin>>subno;
   cout<<endl;
  for (i=1;i<=subno;i++)
   {
       cout<<"input marks of "<< i <<" no course"<<endl;
       cin>>marks[i];
       cout<<endl;
        cout<<"input credit of "<< i <<" no course"<<endl;
        cin>>credit[i];
        cr=cr+credit[i];
        cout<<endl;
      if (marks[i]<50)
        {
             cout<<"Your grade is : F"<<endl;
              tg=(0*credit[i])+tg;
              cout<<endl;
        }
       else if(marks[i]>=50&&marks[i]<=59)
       {
           cout<<"Your grade is : D"<<endl;
            tg=(2.25*credit[i])+tg;
            cout<<endl;
       }

        else if(marks[i]>=60&&marks[i]<=64)
        {
            cout<<"Your grade is : D+"<<endl;
              tg=(2.50*credit[i])+tg;
              cout<<endl;
        }

         else if(marks[i]>=65&&marks[i]<=69)
         {
              cout<<"Your grade is : C"<<endl;
              tg=(2.75*credit[i])+tg;
              cout<<endl;
         }

         else if(marks[i]>=70&&marks[i]<=74)
         {
             cout<<"Your grade is : C+"<<endl;
               tg=(3.00*credit[i])+tg;
               cout<<endl;
         }

         else if(marks[i]>=75&&marks[i]<=79)
         {
              cout<<"Your grade is : B"<<endl;
              tg=(3.25*credit[i])+tg;
              cout<<endl;
         }

         else if(marks[i]>=80&&marks[i]<=84)
         {
             cout<<"Your grade is : B+"<<endl;
             tg=(3.50*credit[i])+tg;
             cout<<endl;
         }

         else if(marks[i]>=85&&marks[i]<=89)
         {
             cout<<"Your grade is : A"<<endl;
                tg=(3.75*credit[i])+tg;
                cout<<endl;
         }

         else if(marks[i]>=90&&marks[i]<=100)
         {
              cout<<"Your grade is : A+"<<endl;
              tg=(4.00*credit[i])+tg;
              cout<<endl;
         }

        else
        {
                  cout<<"invalid"<<endl;
                  i=i-1;
                  cout<<endl;
        }



   }float gpa=tg/cr;
   cout<<"Your GPA is "<<gpa<<endl;
   cout<<endl;
   tg=0;gpa=0;
   }
   cout<<endl;




  cout<<"Input how many semesters you have completed: "<<endl;
  cin>>sem;
  cout<<endl;

   for (i=1;i<=sem;i++)
   {
        cout<<"input GPA of "<< i <<" no semester"<<endl;
        cin>>gp[i];
        cout<<endl;
         while (gp[i]>4)
        {
           cout<<"invalid"<<endl;
           i=i-1;
           cout<<endl;
        }
        cg=cg+gp[i];
   }
   float cgpa=cg/sem;
   cout<<"Your CGPA is "<<cgpa<<endl;


}
