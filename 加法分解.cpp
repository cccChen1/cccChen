#include<iostream>
using namespace std;
int sum(int n){
 if(n==1){
 return 1;
}else{
 return n+sum(n-1);
}
 }
 int main()
{
 int p;  
 int sumSUM=0;
 for(p=0;p<150;p++){
  cout<<sum(p+1)<<' ';
  sumSUM+=sum(p+1);
  if((p+1)%10==0){
   cout<<endl;
  }
 }
 cout<<sumSUM<<endl;
}
//空间复杂度O（n） 
//时间复杂度O（n） 
