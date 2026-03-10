#include <iostream>
#include <cstring>
using namespace std;

void daoChuoi(char s[]) {
    int n = strlen(s);
    for(int i=0;i<n/2;i++){
        char t = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = t;
    }
}

int main(){
    char s[100];
    cout<<"Nhap chuoi: ";
    cin.getline(s,100);

    daoChuoi(s);

    cout<<"Chuoi dao nguoc: "<<s;
}
