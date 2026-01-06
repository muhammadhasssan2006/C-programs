#include<iostream> 
using namespace std;
int main () 
{ 
int age;
string name,fatherName,number,email,city,education,skills;
cout << "=====================================\n";
cout << "Enter Your Details\n"; 
cout << "=====================================\n";
cout<<"Enter Your Name: ";
cin>>name;
cout<<"Enter Your Father Name: ";
cin>>fatherName;
cout<<"Enter Your Age: ";
cin>>age;
cout<<"Enter Your Phone Number: ";
cin>>number;
cout<<"Enter Your City Name: ";
cin>>city;
cout<<"Enter Your Education: ";
cin>>education;
cout<<"Enter Your Skills: ";
cin>>skills;
cout<<endl;
cout<<endl;



cout << "=====================================\n";
cout << "Your CV\n"; 
cout << "=====================================\n";
std::cout<<"Name: "<<name<<endl;
std::cout<<"Father Name: "<<fatherName<<endl;
std::cout<<"Age: "<<age<<endl;
std::cout<<"Phone Number: "<<number<<endl;
std::cout<<"City: "<<city<<endl;
std::cout<<"Education: "<<education<<endl;
std::cout<<"Skills: "<<skills<<endl;


return 0;
} 

