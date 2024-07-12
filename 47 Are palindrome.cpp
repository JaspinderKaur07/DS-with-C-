#include <bits/stdc++.h>
#include<string>
using namespace std;

 
bool arePermutation(string A, string B)
{
  if(A.size()!=B.size())
    return false;
  for(char ch:A)
  {
      if(B.find(ch)!=string::npos)
         B.erase(B.find(ch),1);
      else
         return false;
  }
  return true;
}
