
/*#include <iostream>
#include <string>


int main()
{
    std::string name;
    std::cout<<"What is your full name?"<<std::endl;
    std::getline(std::cin,name);

    int age;
    std::cout<<"What is your age?"<<std::endl;
    std::cin>>age;

    std::string gender;
    std::cout<<"What is your gender?"<<std::endl;
    std::cin>>gender;
    
    int pass_year;
    std::cout<<"Which year did you graduate from college?"<<std::endl;
    std::cin>>pass_year;

    std::string place;
    std::cout<<"Which city do you live in?"<<std::endl;
    std::getline(std::cin,place);


    std::cout<<"Hello "<< name <<" you are a "<< age <<" year old "<< gender <<". And you graduated from college in "<<pass_year<<" You live in "<<place;

    return 0;

}











#include <iostream>

int main()
{
    char character1{'a'};
    char character2{'g'};
    char character3{'k'};
    char character4{'n'};
    char character5{'x'};

    std::cout<<character1<<std::endl;
    std::cout<<character2<<std::endl;
    std::cout<<character3<<std::endl;
    std::cout<<character4<<std::endl;
    std::cout<<character5<<std::endl;

    std::cout<<sizeof(character1)<<std::endl;

    char val = 37;
    std::cout<<"Value is "<< val <<std::endl;
    std::cout<<"Value int is "<< static_cast<int>(val) <<std::endl;

    std::cout<< static_cast<int>(character1);
} 














#include <iostream>
#include <iomanip>

int main()
{
   float number1{3.4576573782f};
   double number2{5.78956745667846774};
   long double number3{343.32647823894237976784327l};
   
   std::cout<<sizeof(float)<<std::endl;
   std::cout<<sizeof(double)<< std::endl;
   std::cout<<sizeof(long double)<<std::endl;

   // std::cout << std::setprecision(15);
   std::cout<< "number 1 is "<< number1<<std::endl;
   std::cout << "number 2 is " << number2 << std::endl;
   std::cout << "number3 is " << number3 << std::endl;


    long double num1{10};
    long double num2{3};

    long double breaking{num1 / num2};
   //  std::cout << std::setprecision(23);
    
    std::cout<< "ALL hell breakes lose when we divide by zeroe as shown: "<< breaking<< std::endl;
   
   long double cart1{20};
   long double cart2{3};

   long double result{cart1 /cart2};
   std::cout <<" the result is "<<result<<std::endl;
   std::cout<<" what happnes when we add NAN to infinity "<<result + breaking<<std::endl;



   double num4(12.4567e5);
   double num5(234.3456e6);
   double num6(1234445e-8);

   std::cout<< "number 4 is "<<num4<<std::endl;
   std::cout<< "number 5 is "<< num5 <<std::endl;
   std::cout<< "number 6 is "<< num6 << std::endl;
}














#include <iostream>

int main()
{
    bool red_light{};
    bool green_light{true};
     
     if(red_light)
     {
        std::cout<<"Stop!!"<<std::endl;

     }

     else
     {
        std::cout<<"Go ahed!!"<<std::endl;

     }

     if(green_light)
     {
        std::cout<<" The green light is shown "<<std::endl;

     }
     else{
        std::cout<<"The light is not green "<<std::endl;

     }

     std::cout<<"red light "<<red_light<<std::endl;
     std::cout<<"green light "<< green_light <<std::endl;

     std::cout<<std::boolalpha;
     std::cout<<"red light "<<red_light<<std::endl;
     std::cout<<"greenlight "<<green_light<<std::endl;

     return 0;

}








#include<iostream>

int main()
{
    auto var1{13};
    auto var2{14.6};
    auto var3{34.67f};
    auto var4{25.23l};
    auto var5{'e'};

    auto var6{234u};
    auto var7{354ul};
    auto var8{688ll};

    std::cout<<"size of var1 "<< sizeof(var1)<<" bytes"<<std::endl;
    std::cout<<"size of var2 "<< sizeof(var2)<<" bytes"<<std::endl;
    std::cout<<"size of var3 "<< sizeof(var3)<<" bytes"<<std::endl;
    std::cout<<"size of var4 "<< sizeof(var4)<<" bytes"<<std::endl;
    std::cout<<"size of var5 "<< sizeof(var5)<<" bytes"<<std::endl;
    std::cout<<"size of var6 "<< sizeof(var6)<<" bytes"<<std::endl;
    std::cout<<"size of var7 "<< sizeof(var7)<<" bytes"<<std::endl;
    std::cout<<"size of var8 "<< sizeof(var8)<<" bytes"<<std::endl;


}


#include <iostream>

// using std::endl;
using namespace std;


int main() {
  int var1{143};
  cout << "var1 is " << var1 << endl;

  var1 = 2344;
  cout << "var1 now is " << var1 << endl;

  cout << "-------------"<<endl;

  double var2 {34.43};
  cout<<"var2"<<var2<<endl;

  var2 = 18.234;
  cout<<"var2 now is "<<var2<<endl;

  bool fall{true};
  
  cout<< boolalpha ;
  cout<<fall <<endl;
   
   fall = false;
   cout<< fall<<endl;

   auto var3{245467.0};
   cout<< var3<<endl;

   var3 = -2787.5567 ;
   cout<<var3<<endl;

  return 0;

}










#include <iostream>

using namespace std;

int main(){
     int a{10};
     int  b{3};
     int result{a + b };
   cout<< "result is "<<result<<endl;

   result = b - a;
   cout<<"result of subtraction is "<<result<<endl;

   result = a*b;
   cout<<"multipying gives "<<result<<endl;

   result = a/b;
   cout<<"division gives  "<<result<<endl;

   result = a%b;
   cout<<"modulus is "<<result<<endl;


return 0;

}









//precedence and associativity
#include <iostream>

int main()
{
   int a{17};
   int b{2};
   int c{13};
   int d{5};
   int e{12};
   int f{9};
   int g{8};
   int h{7};

   int result = a - f/(d*c) + h*b + e%g ;
   std::cout<<"result is "<<result<<std::endl;

   result = a/(b*c) ;
   std::cout<< result <<std::endl;

return 0;


}





#include <iostream>
using namespace std;

int main()
{
   int val{6};
   val = val+1;
   std::cout <<"The value is "<<val<<std::endl;

   val = 5;
   val = val - 1;
   cout<<"The value is "<<val<<endl;

   //=====================================================

   cout<<"====================postfix valus============"<<endl;

   val = 6;
   cout<< "The value incrementing is: "<< val++ <<endl;
   cout<< "The value is "<< val <<endl;
   cout<< "The value decrementing is "<< val-- <<endl;
   cout << "The value is "<< val <<endl;

   cout<<"===========prefix values==========="<<endl;

   val = 7;
   ++val;
   cout<<"The value prefix is "<< val << endl;

   cout<<"Reset "<< --val <<endl;

    
   cout<< "The value is " << ++val <<endl;

   return 0;
}




// compund operators

#include <iostream>

int main()
{
   int val{93};
   std::cout<<"The value is "<<val<<std::endl;

   val = val + 5;
   std::cout<<"The value now is " <<val <<std::endl;

   val = 93;
   val += 5;
   std::cout<<"The value is "<<val<<std::endl;

   val = 93;

   val -=6;
   std::cout<<"The value after sbtraction is "<< val <<std::endl;

   val = 93;
   val *= 3;
   std:: cout<<" The value after multiplication is "<< val << std::endl;

   val = 93;
   val /= 3;
   std::cout<<"The value after devision is " << val << std::endl;

}









#include<iostream>

int main()
{
   int num1{24};
   int num2{35};

   std::cout << "number1 : " << num1 << std::endl;
   std::cout << "number2 : " << num2 << std::endl;

   std::cout << std::boolalpha;

   std::cout << "comparing numbers" << std::endl;

   std::cout << "number1<number2 : " << (num1 < num2) << std::endl;
   std::cout << "number1>number2 : " << (num1 > num2) << std::endl;
   std::cout << "number1 = number2 : " <<(num1 == num2) << std::endl;
   std::cout<<"number1 <= number2 : "<<(num1 <= num2) <<std::endl;
   std::cout <<"number1 >= number2 :  "<<(num1 >= num2)<<std::endl;
   std::cout<<"nuber1 is not equal to number2 : "<<(num1!=num2)<<std::endl;

   std::cout<<"store the result of comparison "<<std::endl;

   bool result = (num1 == num2);
   std::cout<< num1 << " = "<< num2 << " : "<< result<<std::endl;



}









#include<iostream>

int main(){
   bool a{false};
   bool b{true};
   bool c{true};
   bool d{false};

   std::cout << std::boolalpha;
   
   std::cout<<"a : "<<std::endl;
   std::cout<<"b : "<<std::endl;
   std::cout<<"c : "<<std::endl;
   std::cout<<"d : "<<std::endl;


   std::cout<<"basic AND operations "<<std::endl;


   std::cout<<"a&&b "<< (a&&b) << std::endl;
   std::cout <<"b&&c " << (b&&c) <<std::endl;
   std::cout <<"a&&b&&c "<<(a&&b&&c)<<std::endl;

   std::cout<<" basic OR operations "<<std::endl;

   std::cout<<" a||d : "<< (a||d)<<std::endl;
   std::cout<<" a||c : "<<(b||c)<<std::endl;
   std::cout<<" a||b||c : "<<(a||b||c)<<std::endl;


   std::cout<<"bacic NOT operations "<<std::endl;

   std::cout<<" !a "<< !a <<std::endl;
   std::cout<<" !b "<< !b <<std::endl;




   //combining logic operators and relational operators

   int q{23};
   int z{87};
   int s{32};


   std:: cout<<"(q<s)&&(q>z) "<< ((q<s)&&(q>z))<<std::endl;
   std::cout<< "(z==s)||(s>q) "<< ((z==s)||(s>q))<<std::endl;
   std::cout<<"!((q>z)==s)"<<(!((q>z)==s))<<std::endl;

}*/








#include<stdio.h>

int main()
{
   printf ("haekjvajb");




}




