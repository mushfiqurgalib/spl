#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
   FILE *htmlsearch;
   if((htmlsearch=fopen("hello.html","r"))==NULL)
   {
       printf("Error!Cant open file");
       exit(1);
   }
   char str[20000],c;
   fscanf(htmlsearch,"%%[^<\body>]s",&c);



}
