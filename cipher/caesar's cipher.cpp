#include<iostream>
// plaintext in lowercase
//ciphertext in uppercase
using namespace std;
string enc(string,int);
string dec(string ciphertext,int key);
int main(){
 
 cout<<enc("aakarshan dsf",10)<<endl;
 cout<<dec(enc("aakarshan dsf",10),10)<<endl;

}

string enc(string plaintext, int key){

char cipher[plaintext.length()];
string ciphertext;
for(int x=0;x<plaintext.length();x++){

cipher[x] = (((plaintext[x]-97)+key)%26)+65;
if(cipher[x] == '>'){cipher[x] = ' ';}  //to deal with space
ciphertext.append(1,cipher[x]);

}

return ciphertext;
}

string dec(string ciphertext,int key){

string plaintext;
char plain[ciphertext.length()];

for(int x = 0;x<ciphertext.length();x++){
ciphertext[x] =  ciphertext[x]-65;    
int p = ciphertext[x] - key;

if(p<0){
    p = 26+p;
}

plain[x] = p+97;
if(plain[x]=='P'){plain[x]=' ';}  //to deal with space
plaintext.append(1,plain[x]);
}
return plaintext;
    
}
