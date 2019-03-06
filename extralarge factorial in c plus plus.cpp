#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {
    string s = to_string(n);
    string str = "";
    string s2="";
    int a,carry,size,temp;
    while(n>2){
        n--; 
        size = s.size();
        carry=0;   
        for(int i=size-1;i>=0;i--){  
            a = s[i]-'0';
            if((a*n+carry)>9){
                temp = (a*n+carry);
                carry = temp/10; 
                temp = temp%10;
                str = to_string(temp) + str;
            }
            else{
                str = to_string(a*n+carry);
                carry=0;
            }
            s2=str+s2;
            str="";
        }
        if(carry>0){
            str = to_string(carry)+str;
            s2=str+s2;
        }  
        s=s2;
        s2=""; 
        str="";
    }
    cout<<s;

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);
    return 0;
}