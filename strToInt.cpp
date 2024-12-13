#include<iostream>
#include<string>
using namespace std;
int strToInt(string& str){
   int res=0;
   for(int i=0;i<str.length();i++){
      int digit=str[i]-48;
      res=res*10+digit;
   }
   return res;
}
int main(){
  string str;;
  cout<<"entrer the string"<<endl;;
  cin>>str;
//  
 
 int res=strToInt(str);
 cout<<"result is"<<res;
 
    return 0;
}