#include<iostream>
#include<string>
using namespace std;
int count(string& str){
    int count=0;
    for(int i=0;i<str.length();i++){
       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u') {
        continue;
       }
       else{
        count++;
       }
    }
    return count;
}
int main(){
  string str;;
  cout<<"entrer the string"<<endl;;
  cin>>str;
  for(int i=0;i<str.length();i++){
    cout<<str[i];
  }
  int result=count(str);
  cout<<endl;
  cout<<result;
    return 0;
}