#include<string.h>
#include<bits/stdc++.h>

#include<string.h>

using namespace std;
struct Node
{
    string tag;
    bool isprint1;

   Node *parent,*children[100];

   Node (){


           isprint1=false;}
};

//struct Node* parser();
void parser();
void operation(string str);

