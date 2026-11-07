#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

struct person
{
    string name;
    int age;
};

int main(){
    string name;
    int age,n,a = 0,b = 1000000,c,d;
    cout << "Enter the number of people ";
    cin >> n;
    vector<person> data(n);
    fstream file; 
    file.open("details.txt",ios::out|ios::in|ios::trunc);
    for (int i = 0; i < n; i++)
    {
        cin >> name >> age;
        file << name << " " << age << endl;
    }
    file.seekg(0,ios::beg);
    for (int i = 0; i < n; i++)
    {
        
        file >> data[i].name >> data[i].age;
    }
    file.close();
    for (int i = 0; i < n; i++)
    {
        if (data[i].age > a)
        {
            a = data[i].age;
            c = i;
        }if (data[i].age < b)
        {
            b = data[i].age;
            d = i;
        }
    }
    fstream file1;
    file1.open("results.txt",ios::out|ios::trunc);
    file1 << "Oldest: " << data[c].name << " " << data[c].age << endl;
    file1 << "Youngest: " << data[d].name << " " << data[d].age << endl;
    file1.close();
    return 0;
}