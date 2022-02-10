#include <iostream>
//encrypts words with length multiple of 3
using namespace std;
string encrypt(string data, int *ptr);
int main(){

int arr[3][3] = {{17,17,5},{21,18,21},{2,2,19}};
string cipher;

cipher = encrypt("paymoremoney",&arr[0][0]);

cout<<cipher;

}

string encrypt(string data, int *ptr){                    /* [1,1] [1,2] [1,3] */
int len = data.length();                                  /* [2,1] [2,2] [2,3] */   
int iter = len/3;                                         /* [3,1] [3,2] [3,3] */  
int iter2 = 0;
int a[3][3];    
string cipher;                                        
for(int i=0;i<3;i++){                                   
    for(int j=0;j<3;j++){
        a[i][j] = *ptr;
        ptr++;
    }
}
char p[len];
for(int x=0;x<len;x++){
  p[x] = data[x]-97;
}
for(int q = 0;q<iter;q++)  {
char c[3];

for(int i=0;i<3;i++){
int n = 0;
   for(int j=0;j<3;j++) {
    n = n+a[j][i]*p[iter2+j];
                        }
                       
n = n%26;
c[i] =n+97;
cipher.append(1,c[i]);
}
iter2 = iter2+3; 
                           }

return cipher;

}
