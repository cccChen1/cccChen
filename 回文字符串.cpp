#include<cstdio>
#include<iostream>
#include<cstring>
 
using namespace std;
bool find(const char *str, int n)
{
    if(n<=1) return true;
    else if(str[0]==str[n-1]) 
	return find(str+1, n-2);//去掉首尾两个，所以n-2
    else return false;
}
 
int main()
{
    string str[4]= {"aba","abba","cccbccc","aaaa"};
    for(int i=0;i<4;i++)
        {
            cout<<str[i]<<endl;
            if(find(str[i].c_str(), str[i].length()))
                cout<<"Yes\n";
            else
                cout<< "No\n";
        }
}

