//A program that corrects spacing and capitalization in an input string.
#include <iostream>
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;

void input(char s[], int size);
//Reads in a sentence and stores it in C-string variable s.

void format(char s[]);
//Corrects spacing and capitalization in C-string variable s.

void output(const char s[]);
//Outputs the the formatted C-string s.

const int SIZE = 101;

int main()
{
    char sentence[SIZE];

    input(sentence, SIZE);
    format(sentence);
    output(sentence);

    return 0;
}

void input(char s[], int size)
{
    cout<<"\nEnter a sentence: ";
    cin.getline(s, size, '.');
    strcat(s, ".");
    cout<<endl;
}

void format(char s[])
{
    int index = strlen(s) - 1;

    while(index >= 0)
    {
        //Tests if a character beyond position 0 is uppercase.
        if (index >= 1  && isupper(s[index]))
            s[index] = tolower(s[index]);

        //Tests if a character is a line break.
        if (s[index] == '\n')
            s[index] = ' ';

        //Tests for two consecutive blanks at s[index] & s[index - 1] or a
        //blank at s[0].
        if((isspace(s[index]) && isspace(s[index - 1])) || (isspace(s[index]) && index == 0))
        {
            for (int i = index; i <= strlen(s); i++) 
                s[i] = s[i + 1]; 
        }
        index--;
    }

    //If first character is non-space character is lower case.
    if (islower(s[0]))
        s[0] = toupper(s[0]);
}

void output(const char s[])
{
    cout<<"Formatted sentence: ";
    cout<<s<<endl<<endl;
}
