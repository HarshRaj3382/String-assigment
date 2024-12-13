#include<iostream>
#include<string>
using namespace std;
void update(string& str){
    for(int i=0;i<str.length();i++){
        if(i%2!=0){
            str[i]='#';
        }
    }
}
int main(){
  string str;;
  cout<<"entrer the string";
  cin>>str;
  for(int i=0;i<str.length();i++){
    cout<<str[i];
  }
  update(str);
  cout<<endl;
  for(int i=0;i<str.length();i++){
    cout<<str[i];
  }
    return 0;
}