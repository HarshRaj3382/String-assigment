#include<iostream>
#include<string>
using namespace std;
void _2ndhalf_rev(string& str){
 
    int n=str.length();
    int i=(n/2);
    int j=n-1;
    while(i<j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
   
}
int main(){
  string str;;
  cout<<"entrer the string"<<endl;;
  cin>>str;
  for(int i=0;i<str.length();i++){
    cout<<str[i];
  }
  cout<<endl;
  _2ndhalf_rev(str);
  for(int i=0;i<str.length();i++){
    cout<<str[i];
  }

  


    return 0;
}