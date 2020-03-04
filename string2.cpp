#include<iostream>
#include<set>

using namespace std;

void duplicates (char s[], int n){
  // set<char> temp (s.begin(), s.end());
  // for(auto i = temp.begin(); i != temp.end(); i++){
  //   cout<<*i<<" ";
  // }
  set<char> temp (s, s+n-1);
  for(auto i = temp.begin(); i != temp.end(); i++){
    cout<<*i;
  }
} 

int main(){
  string s = "Java";
  char temp[]{"geeksforgeeks"};
  int n = sizeof(temp)/sizeof(temp[0]);
  int i = 0;
  // for(auto x: s){
  //   temp[i++] = x;
  // }
  // temp[i] = '\0';
  duplicates(temp, n);
  return 0 ;
}