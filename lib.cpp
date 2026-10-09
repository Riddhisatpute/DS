#include <iostream>
using namespace std;
int main()
{
int id1,id2,id3;
string title1,title2,title3;

cout<<"enter book 1 id:- ";
cin>> id1;

cin.ignore();
cout<<"enter your book 1 title:- ";
getline(cin,title1);

cout<<"enter yuor book 2 id:- ";
cin>> id2;

cin.ignore();
cout<<"enter your book 2 title:- ";
getline(cin,title2);

cout<<"enter your book 3 id:- ";
cin>> id3;

cin.ignore();
cout<<"enter your book 3 title:- ";
getline(cin,title3);

cout<<"\n===library books====";

cout<<"\nyour id of book:- "<<id1;
cout<<"\nyour title of book:- "<<title1;

cout<<"\nyour id of book:- "<<id2;
cout<<"\nyour title of book:- "<<title2;

cout<<"\nyour id of book:- "<<id3;
cout<<"\nyour title of book:- "<<title3;
return 0;
}
     
     
     
     
     
