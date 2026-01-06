#include <iostream>
using namespace std;

int main()
{
   char ch;
   cout<<"Enter any alphabet to check vowel: ";
   cin>>ch;
   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    cout<<"Its vowel alphabet";
   }
   else{
        cout<<"Its consonent alphabet";

   }

   return 0;
}