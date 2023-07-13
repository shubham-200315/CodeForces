#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main(){
    int test_cases;
    cin>>test_cases;
    for(int i=0; i<test_cases; i++)
    {
        vector<string> v(3);
        for(int j=0; j<3; j++){
           for(int k=0; k<3; k++){
                cin>>v[j][k];
           }
        }
        string ans = "DRAW";
        
        for(int k=0; k<3; k++)
        {
            if(v[k][0] == v[k][1] && v[k][1] == v[k][2] && v[k][0] != '.' )
            {
                ans = v[k][0];
            }
        }
        for(int k=0; k<3; k++)
        {
            if(v[0][k] == v[1][k] &&  v[1][k] == v[2][k] && v[0][k] != '.' )
            {
                ans = v[0][k];
            }
        }
        if(v[0][0]==v[1][1] && v[1][1]==v[2][2] && v[0][0]!='.')
        {
            ans = v[0][0];
        }
        if(v[0][2]== v[1][1] && v[1][1]==v[2][0]&& v[0][2]!='.')
        {
            ans = v[0][2];
        }
        cout<<ans<<endl;
    }
    return 0;
}