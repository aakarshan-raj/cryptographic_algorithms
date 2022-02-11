#include <iostream>

using namespace std;
string encrypt(string plaintext,string key);
string decrypt(string ciphertext, string key);

int main(){


    cout<<encrypt("abc","zzz")<<endl;
    cout<<decrypt(encrypt("abc","zzz"),"zzz");
  
}




string encrypt(string plaintext,string key){
string ciphertext;
char plain[plaintext.length()];
char keyc[plaintext.length()];
char cipher[plaintext.length()];
for(int x=0;x<plaintext.length();x++){
plain[x] = plaintext[x];
}

for(int x=0;x<key.length();x++){
keyc[x] = key[x];
}
for(int x=0;x<plaintext.length();x++){

cipher[x] = (plain[x]^keyc[x]);
ciphertext.append(1,cipher[x]);

}
return ciphertext;


}
string decrypt(string ciphertext, string key){

char cipher[ciphertext.length()];
for(int x=0;x<ciphertext.length();x++){
    cipher[x] = ciphertext[x];
}
char keyc[key.length()];
for(int x=0;x<key.length();x++){
    keyc[x] = key[x];
}
string plaintext;
char plainc[ciphertext.length()];
for(int x = 0;x<ciphertext.length();x++){
    plainc[x] = cipher[x]^keyc[x];
    plaintext.append(1,plainc[x]);
}

return plaintext;

}
