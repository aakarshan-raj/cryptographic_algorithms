#include<iostream>
// plaintext in lowercase
//ciphertext in uppercase
using namespace std;
string enc(string,int);
string dec(string ciphertext,int key);
int main(){
 
 cout<<enc("aakarshan",10)<<endl;
 cout<<dec(enc("aakarshan",10),10)<<endl;

}

string enc(string plaintext, int key){

char cipher[plaintext.length()];
string ciphertext;
for(int x=0;x<plaintex#include<iostream>
// plaintext in lowercase
//ciphertext in uppercase
using namespace std;
string enc(string,int);
string dec(string ciphertext,int key);
int main(){
 
 cout<<enc("aakarshan",10)<<endl;
 cout<<dec(enc("aakarshan",10),10)<<endl;

}

string enc(string plaintext, int key){

char cipher[plaintext.length()];
string ciphertext;
for(int x=0;x<plaintext.length();x++){

cipher[x] = (((plaintext[x]-97)+key)%26)+65;
ciphertext.append(1,cipher[x]);

}
return ciphertext;
}

string dec(string ciphertext,int key){
#include<iostream>
// plaintext in lowercase
//ciphertext in uppercase
using namespace std;
string enc(string,int);
string dec(string ciphertext,int key);
int main(){
 
 cout<<enc("aakarshan",10)<<endl;
 cout<<dec(enc("aakarshan",10),10)<<endl;

}

string enc(string plaintext, int key){

char cipher[plaintext.length()];
string ciphertext;
for(int x=0;x<plaintext.length();x++){

cipher[x] = (((plaintext[x]-97)+key)%26)+65;
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
plaintext.append(1,plain[x]);
}
return plaintext;
    
}
string plaintext;
char plain[ciphertext.length()];

for(int x = 0;x<ciphertext.length();x++){
ciphertext[x] =  ciphertext[x]-65;    
int p = ciphertext[x] - key;
if(p<0){
    p = 26+p;
}

plain[x] = p+97;
plaintext.append(1,plain[x]);
}
return plaintext;
    
}t.length();x++){

cipher[x] = (((plaintext[x]-97)+key)%26)+65;
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
plaintext.append(1,plain[x]);
}
return plaintext;
    
}
