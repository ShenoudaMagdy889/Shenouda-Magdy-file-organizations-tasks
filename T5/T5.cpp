#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

struct person
{
    char name[20];
    int id;
    float grade;
    char delim ='$';
};

int main(){
    bool flag = true;
    char choice;
    vector<person> students;
    person p;
    while (flag)
    {
        
        cin.getline(p.name, 20);
        cin >> p.id >> p.grade;
        students.push_back(p);
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
        cin.ignore();
        if (choice == 'n' || choice == 'N')
        {
            flag = false;
        }
    }
    
   fstream file;
   file.open("students.txt",ios::out|ios::trunc);
   
   while(!students.empty())
   {
       file << students.back().name << ',' << students.back().id << ',' << students.back().grade << " " <<students.back().delim << "\n";
       students.pop_back();
   }
   file.close();
   return 0;
}