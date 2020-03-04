#include<iostream>
#include<algorithm>

using namespace std;

void rev(string s){
  reverse(s.begin(), s.end());
  for( auto x: s){
    cout<<x;
  }
  cout<<endl;
}

int main(){
  string s = "java is best";
  rev(s);
  return 0;
}