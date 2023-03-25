#include <iostream>

int main(){
 int a,b,r;
 std::cin>>a;
 std::cin>>b;
 if(a<b){
   int c = b;
   b = a;
   a = c;
 }
 while(true){
   int q = a/b;
   int r = a-b*q;
   if(r==0){
      break;
   }
   a = b;
   b = r;
 }
 
 std::cout<<b<<std::endl;
}
