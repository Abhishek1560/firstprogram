#include <iostream>
using namespace std;

int main()   {
string fullname;
cout<<" Enter your fullname: ";
//cin>>fullname;
getline(cin,fullname);
cout<<" my fullname is: "<<fullname<<endl;
return 0;
}
