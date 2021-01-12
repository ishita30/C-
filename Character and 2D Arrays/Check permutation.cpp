#include<iostream>
using namespace std;
#include<cstring>
bool isPermutation(char input1[], char input2[]) {
    int len1=strlen(input1);
    int len2=strlen(input2);
    if(len1!=len2)
    {
        return false;
    }
    int frequency[256]; //256 as total 256 unique characters are possible
    for(int i=0;i<256;i++)
    {
        frequency[i]=0; // placing 0 at all places in frequency array.
    }
    for (int i=0;input1[i]!='\0';i++){
            frequency[input1[i]]++;
        }
    for (int j=0;input2[j]!='\0';j++){
            frequency[input2[j]]--;
        }
    for(int i=0;i<256;i++)
    {
        if(frequency[i]!=0) // checking if after reducing the input2 gives 0.
        {
            return false;
        }
    }
    return true;
}
int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}