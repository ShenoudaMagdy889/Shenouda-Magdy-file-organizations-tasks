#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
string name;
int id,grade;
getline(cin,name);
cin>>id>>grade;
fstream file;
file.open("student.txt",ios::out|ios::trunc);
file << name << " " << id << " " << grade << endl;
file.close();
return 0;
}