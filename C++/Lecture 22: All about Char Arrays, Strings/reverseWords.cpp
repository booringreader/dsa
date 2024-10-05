#include<iostream>
using namespace std;
char toLowercase(char ch ){
    if(ch>='a' && ch<='z'){
        return ch;
    }else{
        char temp=ch-'A'+'a';
        return temp;
    }
}


void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

bool isPalindrome(char name[], int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        if(toLowercase(name[s])==toLowercase(name[e])){
            s++;
            e--;
        }else{
            return false;
        }
    }
    return true;
    
}



int main(){
    char name[20];
    cout<<"Enter your Name: ";
    cin>>name;
    int len=getLength(name);
    reverse(name, len);
    cout<<name<<endl;

    cout<<"isPalindrome: "<<isPalindrome(name, len)<<endl;
} 