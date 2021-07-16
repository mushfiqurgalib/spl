#include<string.h>
#include<bits/stdc++.h>

#include<string.h>

using namespace std;
struct Node
{
    string tag;
   Node *parent,*children[100];
};
//struct Node* parser();
void parser();
void operation(string str);

