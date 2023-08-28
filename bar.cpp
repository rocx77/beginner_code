#include<iostream>
#include<iomanip>

using namespace std;

int main(){
   
   float salary ;
   cout<<"What is net income of the year in dollar "<<endl;
   cin>>salary;
   float q;



   if(salary<= 11000)
   {
   cout<<"You are in the tax bracket A "<<endl;
   q = salary/10;
   cout<< "Your net tax of the year is "<<q<<endl;
   }

   else if (salary<= 44725)
   {
    cout<<"You are in the tax bracket B "<<endl;
    q = 1100 + (salary - 11000)*0.12;
    cout<<"Your net tax of the year is "<<q<<endl;
   }

   else if(salary<= 95375)
   {
    cout<<"You are in the taxbracket C"<<endl;
    q = 5147 + (salary - 44725)*0.22;
    cout<<" Your net tax of the year is "<<q<<endl;
   }
   else if(salary<= 182100)
   {
       cout<<"You are in the tax bracket D "<<endl;
       q = 16290 + (salary- 95375)*0.24;
       cout<<"Your net tax of the year is "<<q<<endl;
   }


   else
    {
        cout<<"Gandu jaisa number mat dalo, tera bap bhi dekha hai itna paisa jindagi me"<<endl;

    }

    return 0;
}
    

