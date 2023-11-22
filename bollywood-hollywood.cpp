#include "iostream"
#include <ctype.h>
using namespace std;

int main(){
char movie[50],wood;int nocg=0;
cout<<"Player ONE will enter a movie and Player TWO will be given attempts to enter the name of the movie in the form of any alphabet (in the name of the movie).Player TWO will be given at maximum 9 wrong attempts."<<endl;
cout<<"Player ONE please enter the movie(please use '-' for space) followed by 'h' for hollywood and 'b' for bollywood \n";
cin>>movie;
cin>>wood;

for(int d=1;d<=50;d++)
{
    cout<<"go below for further instruction"<<endl;
}

int n,x,flag=0,num;

cout<<"The movie skeleton is-"<<endl;
for(x=0;movie[x]!='\0';x++)
{
    if(movie[x]=='a'||movie[x]=='e'||movie[x]=='i'||movie[x]=='o'||movie[x]=='A'||movie[x]=='E'||movie[x]=='I'||movie[x]=='O'||movie[x]=='U'||movie[x]=='u')
        cout<<movie[x];
    else  if(movie[x]=='-'){
        cout<<movie[x];}
    else {cout<<"_"; nocg++;}
}
cout<<endl;
cout<<"{'-' has been used to signify (space)}";
cout<<endl;
cout<<"Player TWO turn begins"<<endl;

int forw;
char gu;
int Cnocg=0;
int u;

for(int c=0;c<=100;c++){
    cout<<"Please enter a guess(repeating guesses is not allowed)"<<endl;
    forw=1;
    if(forw==1)
    {
        cin>>gu;
        num=0;
        for(u=0;movie[u]!='\0';u++)
        {
            if(movie[u]==gu)
            {  cout<<movie[u]; num++;Cnocg++; }
         else if(movie[u]=='a'||movie[u]=='e'||movie[u]=='i'||movie[u]=='o'||movie[u]=='A'||movie[u]=='E'||movie[u]=='I'||movie[u]=='O'||movie[u]=='U'||movie[u]=='u')
               cout<<movie[u];
         else if(movie[u]=='-')
               cout<<movie[u];
            else cout<<'_';
        }
        cout<<endl;
        if(num==0)
        {
            flag++;
            if(flag==1) cout<<"Wrong attempt!This places you at- "<<wood<<" Out of "<<wood<<"ollywood"<<endl;
            if(flag==2) cout<<"Wrong attempt!This places you at- "<<"O"<<" Out of "<<wood<<"ollywood"<<endl;
            if(flag==3) cout<<"Wrong attempt!This places you at- "<<"L"<<" Out of "<<wood<<"ollywood"<<endl;
            if(flag==4) cout<<"Wrong attempt!This places you at- "<<"L"<<" Out of "<<wood<<"ollywood"<<endl;
            if(flag==5) cout<<"Wrong attempt!This places you at- "<<"Y"<<" Out of "<<wood<<"ollywood"<<endl;
            if(flag==6) cout<<"Wrong attempt!This places you at- "<<"W"<<" Out of "<<wood<<"ollywood"<<endl;
            if(flag==7) cout<<"Wrong attempt!This places you at- "<<"O"<<" Out of "<<wood<<"ollywood"<<endl;
            if(flag==8) cout<<"Wrong attempt!This places you at- "<<"O"<<" Out of "<<wood<<"ollywood"<<endl;
            if(flag==9) cout<<"Wrong attempt!This places you at- "<<"D"<<" Out of "<<wood<<"ollywood"<<endl;
        }

    }

    if(flag==9)
    {
        cout<<"GAME OVER";break;
    }
    if(Cnocg==nocg)
    {
        cout<<endl<<endl<<endl<<endl;
        cout<<"YOU WIN!!!"<<endl<<"The movie is:- "<<movie<<endl<<endl<<endl<<endl;
        break;
    }
}


return 0;
}
