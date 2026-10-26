#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    fstream file;
    string word;
    file.open("welcome.txt",ios::out|ios::in|ios::trunc);
    file << "Hello Everybody" << endl;
    file.seekp(11);
    file << "one" << endl;
    file.seekg(0);
    getline(file,word);
    cout << word << endl;
    file.close();
    return 0;
}