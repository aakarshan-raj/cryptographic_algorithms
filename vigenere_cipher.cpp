#include <iostream>
using namespace std;
string encrypt(string,string);
string decrypt(string,string);


int main(){


cout<<encrypt("deceptivedeceptivedeceptive","wearediscoveredsaveyourself");
cout<<endl;
cout<<decrypt(encrypt("deceptivedeceptivedeceptive","wearediscoveredsaveyourself"),"deceptivedeceptivedeceptive");



}

string encrypt(string text,string key){

char textc[text.length()];
char cipherc[text.length()];
char keyc[key.length()];
string cipher;
for(int x=0;x<text.length();x++){

keyc[x] = key[x]-97;

}
for(int x=0;x<text.length();x++){

textc[x] = text[x]-97;

}

for(int x=0;x<text.length();x++){
    cipherc[x] = ((textc[x]+keyc[x])%26)+97;
    cipher.append(1,cipherc[x]);
}
return cipher;

}









string decrypt(string text,string key){

char textc[text.length()];

for(int x=0;x<text.length();x++){

textc[x] = text[x]-97;

}

char plainc[text.length()];

string plaintext;
char keyc[key.length()];
for(int x=0;x<text.length();x++){

keyc[x] = key[x]-97;

}


for(int x=0;x<text.length();x++){
    plainc[x] = (textc[x]-keyc[x]);
    if(plainc[x]<0){
        plainc[x] = 26+(textc[x]-keyc[x]);
    }
    plainc[x] = plainc[x]+97;
    plaintext.append(1,plainc[x]);
}
return plaintext;

}
