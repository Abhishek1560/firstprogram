#include <iostream>
using namespace std;

int main()   {
string fullname,firstname,lastname;
cout<< " Enter your firstname: ";
getline(cin,firstname);
cout<< " Enter your lastname: ";
getline(cin,lastname);
fullname = firstname.append(lastname);
cout<<" My fullname is: "<<fullname<<endl;
return 0;
}
