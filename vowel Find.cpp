#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
   // ch = toupper(ch);
    return (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u');
}
string vowel(string S){
    string output;
for (char ch: S)
if(isVowel(ch))
output+=ch;
return output;
    
} 
