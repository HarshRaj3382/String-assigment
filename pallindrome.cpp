#include<iostream>
#include<string>
using namespace std;
void pallindrome(string& str){
    bool  flag=true;
    int n=str.length();
    int i=0;
    int j=n-1;
    while(i<j){
        if(str[i]!=str[j]){
            flag=false;
        }
        else flag=true;
        i++;
        j--;
    }
    if(flag==true){
        cout<<"Yes,String is pallindrome";
    }
    else{
        cout<<"Not a pallindromne";
    }
}
int main(){
  string str;;
  cout<<"entrer the string"<<endl;;
  cin>>str;
//   for(int i=0;i<str.length();i++){
//     cout<<str[i];
//   }

  pallindrome(str);


    return 0;
}