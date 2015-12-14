//
//  Lab IX Part I
//
//  Created by Edgar Esparza on 7/8/15.
//

#include <iostream>
#include <cstring>
using namespace std;


void addLetterS(char orig[],char[]);


int main()
{
    char word[10];
    addLetterS("school", word);
    cout << word << endl;
    return 0;
}

void addLetterS(char orig[],char plural[])
{
    strcpy(plural,orig);
    plural[strlen(orig)]='s';
    plural[strlen(orig)+1]='\0';
}
