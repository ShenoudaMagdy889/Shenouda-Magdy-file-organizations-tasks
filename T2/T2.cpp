#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
string s1,s2,s3;
fstream file;
file.open("fruits.txt",ios::in);
file >> s1 >> s2 >> s3;
file.close();
file.open("fruits.txt",ios::out|ios::trunc);
file << s1 << "\n" << s2 << "\n" << s3 << "\n"<<"Fresh Fruits";
file.close();
return 0;
}