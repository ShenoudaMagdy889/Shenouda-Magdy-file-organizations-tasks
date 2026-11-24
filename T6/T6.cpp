#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
    int x , y;
    fstream file,tempfile;
    file.open("grades.txt",ios::in|ios::out|ios::trunc);
    if (file.fail())
    {
        cout << "Error opening file!" << endl;
        return 0;
    }else
    {
        cout << "File opened successfully!" << endl;
        cout << "Enter 5 grades: " << endl;
    }
    for (long long i = 0; i < 5; i++)
    {
        cin >> x;
        file << x << endl;
    }
    file.close();
    file.open("grades.txt",ios::in|ios::out);
    while(file >> x)
    {
        cout << x << endl;
    }
    file.clear();
    file.seekg(0,ios::beg);
    cout << "which grade do you want to delete? ";
    cin >> y;
    tempfile.open("tempgrades.txt",ios::in|ios::out|ios::trunc);
    while(file >> x)
    {
        if (x == y)
        {
            continue;
        }
        tempfile << x << "\n";
    }
    file.close();
    tempfile.close();
    if(remove("grades.txt") != 0)
    {
        cout << "Error deleting file!" << endl;
        return 0;
    }else
    {
        cout << "File deleted successfully!" << endl;
        if(rename("tempgrades.txt","grades.txt") == 0)
        {
            cout << "File was replaced successfully\n"; 
        }else
        {
            cout << "Couldn't replace file\n";
        }
        
    }
    
}