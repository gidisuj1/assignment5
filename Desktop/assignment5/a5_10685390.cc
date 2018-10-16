
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


struct student{
string iD;
string name;
int age;
double score;
char gender;
char grade;
};


ofstream fout;
student stds[5] ;

int main()
{
int age1 = 0;
double score1 = 0;
int mcount = 0;
int fcount = 0;

for (int i = 0; i < 5; i++)
{
cout <<"Please Enter ID: "<<endl;
cin >> stds [i].iD;

cout <<"Please Enter Name: "<<endl;
cin >>stds [i].name;

cout <<"Please Enter Age: "<<endl;
cin >>stds[i].age;
age1 = age1 + stds[i].age;


cout <<"Please Enter Gender m/f: ";
cin >>stds[i].gender;

if (stds[i].gender == 'm')
{
mcount = mcount + 1;
}
else if (stds[i].gender == 'f')
{
fcount = fcount + 1;
}

cout <<"Please Enter Score: ";
cin >> stds[i].score;
score1 = score1 + stds[i].score;

if (stds[i].score >= 80 && stds[i].score <= 100)
{
stds[i].grade = 'A';
}

else if (stds[i].score >= 70 && stds[i].score <= 79)
{
stds[i].grade = 'B';
}

else if (stds[i].score >= 60 && stds[i].score <= 69)
{
stds[i].grade = 'C';
}

else if (stds[i].score >= 50 && stds[i].score <= 59)
{
stds[i].grade = 'D';
}

else if (stds[i].score >= 40 && stds[i].score <= 49)
{
stds[i].grade = 'E';
}

else if (stds[i].score >= 00 && stds[i].score <= 39)
{
stds[i].grade = 'F';
}

cout << "\n ..........................................................\n";
}


fout.open("message.txt");
cout << "iD \t Name \t Age \t Gender \t Score \t Grade"<<endl;
fout << "iD \t Name \t Age \t Gender \t Score \t"<<endl;
cout <<"---------------------------------------------------------"<<endl;


for (int i = 0; i < 5; i++)
{
fout <<stds[i].iD<<"\t"<<stds[i].name<<"\t"<<stds[i].age<<"\t"<<stds[i].gender<<"\t"<<stds[i].score<<"\t"<<stds[i].grade<<endl;
cout <<stds[i].iD<<"\t"<<stds[i].name<<"\t"<<stds[i].age<<"\t"<<stds[i].gender<<"\t"<<stds[i].score<<"\t"<<stds[i].grade<<"\t"<<endl;

}

cout <<"---------------------------------------------------------"<<endl;
cout << "Average age: "<<age1/5<<endl;
cout << "Average score: "<<score1/5<<endl;
cout << "Number of males: "<<mcount<<endl;
cout << "Number of females: "<<fcount<<endl;


return 0;
}
