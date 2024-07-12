#include<bits/stdc++.h>
#include<vector>
using namespace std;





int compress(vector<char>& chars) {
    
    
    
    
    
   // int size=chars.length;
    
    auto it=chars.begin();
    int temp_count=0;
    char temp_ch;
    //char *temp_ptr;
    
    for(auto it=chars.begin();it!=chars.end();++it)
    {
        temp_count=0;
        temp_ch=*it;
        auto temp_ptr=it;
        while(*temp_ptr==temp_ch&&temp_ptr!=chars.end())
        {
            cout<<*temp_ptr;
            temp_count++;
            ++temp_ptr;
            
        }
       // temp_count-=1;
        cout<<temp_count<<endl;
         
        
        if(temp_count>1)
        { 
            string count_string=to_string(temp_count);
            for(char ch: count_string)
            {
                ++it;
                *it=ch;
            }
      
        it=chars.erase(it+1,temp_ptr)-1;
        
    }
    }
    for(char ch:chars)
    {
        cout<<ch;
    }
    return chars.size();
   
}
