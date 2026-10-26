#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
fstream file;
file.open("fruits.txt",ios::out|ios::app);
file << "Fresh Fruits" << endl;
file.close();
return 0;
}