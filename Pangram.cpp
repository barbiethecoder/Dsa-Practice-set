#include <bits/stdc++.h>
#include<string>
using namespace std;

string pangrams(string s) {
 int count =0;
    transform(s.begin(),
              s.end(),
              s.begin(),
              ::toupper);
                
sort(s.begin(), s.end());
    
for(int i = 0; i < s.size(); i++) {
        if (s[i] != s[i + 1])
            count++;
    }
    if(count==27)
        return "pangram";
    else 
    return "not pangram";
}
  


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
