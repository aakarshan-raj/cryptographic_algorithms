#include <iostream>
//use small letters only
using namespace std;
void char_all();
string encryptor(string plantext,int key);
string decryptor(string cipertext,int key);
int main(){


char op;
op = 'y';
while(op == 'y'){
string what;

cout<<"do u wanna encrypt or decrypt:";
cin>>what;
if(what == "encrypt"){
string plaintext;
int key;
cout<<"Enter the text that you want to encrypt:";
getline(cin,plaintext);
cout<<"Enter the key:";
cin>>key;
cout<<"Here is the encrypted text:"<<encryptor(plaintext,key)<<endl;
}

else{
string cipertext;
int key;
cout<<"Enter the cipertext that you want to decrypt:";
getline(cin,cipertext);
cout<<"Enter the key:";
cin>>key;
cout<<"Here is the decrypted text:"<<decryptor(cipertext,key)<<endl;

}

cout<<"Do u want to continue:(if yes press y else press anything:";
cin>>op;

if(op != 'y'){
 break;
}

}

 }



string encryptor(string plaintext ,int key){
string cipertext;
cipertext = plaintext;
char plainarr[cipertext.length()-1];

for(int i = 0;i<cipertext.length();i++)
     {
      plainarr[i] = cipertext[i];
     }
char crypto[cipertext.length()-1];

for(int i =0;i<cipertext.length();i++)
{
      char x;
      x = plainarr[i];
      if(x == ' ')
       {
        cipertext[i] = x;
       }
      else
    {
       int z = x-97;
       int y = (z+key)%26;
       y = y + 97;
       x = char(y);
       cipertext[i] = x;

    }

}

return(cipertext);

}

string decryptor(string cipertext,int key){

string plaintext = cipertext;
char ciperarr[plaintext.length() - 1];

for(int i =0;i<plaintext.length();i++){

ciperarr[i] = plaintext[i];

}

for(int i =0;i<plaintext.length();i++){
char letter;
letter = ciperarr[i];

if(letter == ' ')
       {
        cipertext[i] = letter;
       }
else if(int((char(ciperarr[i])-97)-key)<0)
{
int a = (letter-97)-key;
a = a+26+97;
letter = char(a);
plaintext[i] = letter;
}

else{
int a = (letter-97)-key;
letter = char(a)+97;
plaintext[i] = letter;
}
}

return(plaintext);


}








