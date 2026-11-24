#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
    fstream file;
    vector<string> names;
    string name;
    file.open("names_before_sort.txt",ios::in|ios::out);
    if (file.fail())
    {
        cout << "Error opening file!" << endl;
        return 0;
    }
    while(getline(file,name))
    {
        names.push_back(name);
    }sort(names.begin(),names.end());
    file.close();
    file.open("names_after_sort.txt",ios::in|ios::out|ios::trunc);
    for (int i = 0; i < names.size(); i++)
    {
        file << names[i] << endl;
    }
    file.close();
    return 0;
}