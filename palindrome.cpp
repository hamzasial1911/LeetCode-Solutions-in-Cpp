#include<iostream>
using namespace std;

bool Is_palindrome(string str){   //function to check whether a string is palindrome or not
  
  int j=str.length()-1;            // storing length in j for reverse move
  
  for(int i=0;i<str.length();i++)
  {
    if(str[i]!=str[j])
       return false;   
    j--;
  }
  
  return true;

}

int main(){
  
  if(Is_palindrome("abccba"))
  {
  
     cout<<"The given string is palindrome\n";
  }
  else{
     cout<<"The given string is not palindrome\n";
  }
  return 0;
}
