#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >='a' && ch<='z'){
        return ch;
    }else{
        char Temp=ch-'A'+'a';
        return Temp;
    }
}


bool checkPalindrone(char name[], int n){
    int s=0;
    int e=n-1;
    while (s<e)
    {
        if(toLowerCase(name[s])==toLowerCase(name[e])){
            s++;
            e--;
        }else{
            return false;
        }
    }
    return true;
    
}

void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
    
}

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i] !='\0'; i++){
        count++;
    }
    return count;
}

char maxOccurChar(string s){
    int arr[26]={0};
    for(int i=0; i<s.length(); i++){
        char ch=s[i];
        int number=0;
        if(ch>='a' && ch<='z'){
            number=ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
    }
    int maxi=-1;
    int ans=0;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
        
    }
    char finalAns='a'+ans;
    return finalAns;
}

int main(){
    // char name[20];
    // cout<<"What is your name?"<<endl;
    // cin>>name;
    // cout<<"Your Name is: "<<name;
    // cout<<endl;
    // int len=getLength(name);
    // cout<<"length is: "<<len<<endl;
    // reverse(name, len);
    // cout<<"Your reverse Name is: "<<name<<endl;
    // cout<<"isPalindrone: "<<checkPalindrone(name, len)<<endl;
    // cout<<"Character: "<<toLowerCase('a')<<endl;
    // cout<<"Character: "<<toLowerCase('A')<<endl;

    string s;
    cin>>s;
    cout<<maxOccurChar(s)<<endl;
}