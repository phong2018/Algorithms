#include <iostream>
using namespace std;
int main() {
   int s=1,e=31,g;
   while(s<e){
       g=(s+e)/2;
       cout<<"Ngày sinh của em lớn hơn "<<g <<" phải không? ";
       char t;
       cin>>t;
       if(t=='T') s=g+1;
       else e=g;
   }
   cout<<"Ngày sinh của em là "<<s;
    
}