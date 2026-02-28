#include<iostream>
using namespace std;
main()
{
float imposter;
float player;
float chances;
cout<<"Enter the imposter value";
cin>>imposter;
cout<<"Enter the player value";
cin>>player;
chances = 100*(imposter/player);
cout<<"chances of being an imposter:"<<chances<<"%";
} 
