#include <iostream>
#include <string>
#include <vector>

using namespace std;

//--------//
// TASK 1 //
//--------//
char shift_char(char c, int n) {
    
    int shiftnum = abs(n)%26; //Negative MOD might cause error
    if(n==0) return c;

    if (c>'a'-1 && c <'z'+1){
        
        if(n>0){ //Positive, Have to add, Wrap Around Z
            if ((int)c + shiftnum > 'z') c -= 26;
            c += shiftnum;
            return c;
        }
        else{ // Negative N, have to minus, Wrap Around A
            if ((int)c - shiftnum < 'a') c += 26;
            c -= shiftnum;
            return c;
        }
    }
    else if(c>'A'-1 && c<'Z'+1){
        if(n>0){ //Positive, Have to add, Wrap Around Z
            if ((int)c + shiftnum > 'Z') c -= 26;
            c += shiftnum;
            return c;
        }
        else{ // Negative N, have to minus, Wrap Around A
            if ((int)c - shiftnum < 'A') c += 26;
            c -= shiftnum;
            return c;
        }
    }
    else return c;
}


string rotate(string &s, int n) {
    if(n==0) return s;
    else if(n>0) //Shift words to left, wrap at back
    {
        for (int i=0;i<n;i++)
        {
            s.push_back(s[0]);
            s.erase(s.begin()); // Or Write as s.begin(0,1)
        }
        return s;
    }
    else //Shift words to right, wrap at front
    {
        int j=abs(n);
        for (int i=0;i<j;i++)
        {
            s.insert(s.begin(),s[s.length()-1]); //insert into the first, of the last character.
            //  s.length give the length of the string, therefore -1.
            s.pop_back(); // Method remove the last character.
        }
        return s;
    }
}




//--------//
// TASK 2 //
//--------//
string caeser(string &s, int n) {
    int j = s.length();
    for (int i =0;i<j;i++){
        char c = shift_char(s[i],n); //Use of shiftchar
        s.replace(i,1,string(1,c)); //string(1,c) is casting i character of c as string. replace need string input.
    }
    return s;
}



//--------//
// TASK 3 //
//--------//

string substitute(string &s, const string key) {
    int j=s.length();
    for (int i=0;i<j;i++){
        if( s[i] >'A'-1 && s[i]<'Z'+1){
            int cnt = s[i]-'A';
            s.replace(i,1,string(1,key[cnt]-('a'-'A'))); // Small A dec is bigger (Lower to Upper)
        }
        else if ( s[i] >'a'-1 && s[i]<'z'+1)
        {
            int cnt = s[i]-'a';
            s.replace(i,1,string(1,key[cnt]));
        }
    }
    return s;
}


string unsubstitute(string &s, const string key) {
    int j=s.length();
    for (int i=0;i<j;i++){
        if( s[i] >'A'-1 && s[i]<'Z'+1){
            int cnt = key.find(s[i]+('a'-'A')); // Small a DEC is bigger (Upper to Lower)
            s.replace(i,1,string(1,'A'+cnt));
        }
        else if ( s[i] >'a'-1 && s[i]<'z'+1)
        {
           int cnt = key.find(s[i]);
            s.replace(i,1,string(1,'a'+cnt));
        }
    }
    return s;
}


//--------//
// TASK 4 //
//--------//

string &vigenere(string &s, vector<int> key) {

    int j=s.length();

    for(int i=0;i<j;i++){
        
        char c = shift_char(s[i],key[i%key.size()]);
        s.replace(i,1,string(1,c));
    }
  
    return s;
}


string &unvigenere(string &s, vector<int>  key){
        int j=s.length();

    for(int i=0;i<j;i++){
        char c = shift_char(s[i],-1*(key[i%key.size()])); 
        s.replace(i,1,string(1,c));
    }
   
    return s;
}
//--------//
// TASK 5 //
//--------//

void freq(string s) {
    vector<int> alpha(26,0); // Fill Vector alpha (24 rooms with zero)
    int j = s.length();
    for (int i =0;i<j;i++){
         if( s[i] >'A'-1 && s[i]<'Z'+1){
            alpha[s[i]-'A'] += 1;
        }
        else if ( s[i] >'a'-1 && s[i]<'z'+1)
        {
            alpha[s[i]-'a'] += 1;
        }
    }
    for (int i =0; i<26; i++){
        cout<< char('a'+ i) << ":" <<  alpha[i] <<" ";
    }
}
// Main Function
int main(void) {
    string text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit!";
    string key = "phqgiumeaylnofdxjkrcvstzwb";
    vector<int> vkey = {7, 5, -6, 22, -13, 6};  // requires latest Mingw installed to work

    // Uncomment to test the different functions
    // cout << shift_char('c', 2) << endl;
    // cout << shift_char('c', -2) << endl;

    // cout << rotate(text, 3) << endl;
    // cout << rotate(text, -3) << endl;

    // cout << caeser(text, 3) << endl;
    // cout << caeser(text, -3) << endl;

    // cout << substitute(text, key) << endl;
    // cout << unsubstitute(text, key) << endl;

    // cout << vigenere(text, vkey) << endl;
    // cout << unvigenere(text, vkey) << endl;

    // freq(text);

    return 0;
}
