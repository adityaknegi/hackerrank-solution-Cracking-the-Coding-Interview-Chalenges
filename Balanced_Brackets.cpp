#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool is_balanced(char expression[]){ 
    
    stack<char> mystack;
    int i=0;
                

  while(i<strlen(expression)){ 
      
    if(expression[i]=='('||expression[i]=='{'||expression[i]=='[')
         mystack.push(expression[i]);
    else if(!mystack.empty()&&(mystack.top()=='('&&expression[i]==')'  ||mystack.top()=='{'&&expression[i]=='}'||mystack.top()=='['&&expression[i]==']'))
         mystack.pop();
    else 
      break;
   i++;
}
    
    if(i<strlen(expression)||!mystack.empty())
        return false;
    
    else
    
        return true;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        char  expression[1001];
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
