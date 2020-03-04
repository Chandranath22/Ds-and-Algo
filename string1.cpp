#include<iostream>
#include<cctype>
#include<algorithm>

using namespace std;

void occurence(string s){
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  int max = 0;
  char max_alpha;
  int count = 0;
  for(int i = 0; i < s.length(); i++){
    count = 0;
    for(int j = 0; j < s.length(); j++){
      if(s[i] == s[j]){
        count++;
      }
    }
    if(count > max && count > 1){
      max = count;
      max_alpha = s[i];
    }
  }
  cout<<max_alpha<<" "<<max<<endl;
}

int main(){
  string s = "c++";
  occurence(s);
  return 0;
}