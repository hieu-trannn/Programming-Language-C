#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

// const int MAXLINES = 10;
// const int MAXLEN = 50;
// int read(char *ptr[]);
// void write(char *ptr[], int nol);
// int readline(char *p);
// char *copyString(char s[]);
// string code1(string s);
// string code2(string s);

int main()
{
    char *t[50];
    int i=0;
    string line;
    ifstream ifs("text.txt");
    // char *text[MAXLINES];
    int nol; // number of lines
    int n; //length of line
    while (getline(ifs,line)){
        n = line.length();
        char char_array[n+1];
        strcpy(char_array, line.c_str());
        i++;
        t[i] = char_array;
        cout<<t[i]<<endl;
    }
    // return 0;
}
//     if ((nol = read(text)) == -1)
//         cout << "Too much lines!" << endl;
//     else if (nol == 0)
//         cout << "No input!";
//     else
//     {
//         for (int i = 0; i < nol; i++)
//         {
//             int t = rand() % 2;
//             string s(text[i]);
//             if (t)
//             {
//                 string str = code1(s);
//                 std::ofstream of("res.txt");
//                 of << str;
//                 of.close();
//             }
//             else
//             {
//                 string str = code2(s);
//                 std::ofstream of("res.txt");
//                 of << str;
//                 of.close();
//             }
//         }
//     }
// }

// int read(char *ptr[])
// {
//     int nol = 0, noc;
//     char *p, line[MAXLEN];
//     while (((noc = readline(line)) > 0))
//     {
//         if (nol > MAXLINES)
//             return -1;
//         else
//         {
//             p = copyString(line);
//             ptr[nol++] = p;
//         }
//     }
//     fflush(stdin);
//     return nol;
// }

// int readline(char p[])
// {
//     int noc = 0;
//     char c;
//     while (((c = getchar()) != EOF) && (c != '\n') && (noc <= MAXLEN))
//     {
//         p[noc] = c;
//         noc++;
//     }
//     if (c == '\n')
//     {
//         p[noc] = '\0';
//     }
//     fflush(stdin);
//     return noc;
// }

// void write(char *ptr[], int nol)
// {
//     int i = 0;
//     do
//     {
//         cout << ptr[i++] << endl;
//     } while (--nol);
// }

// char *copyString(char s[])
// {
//     char *s2;
//     s2 = (char *)malloc(strlen(s));
//     strcpy(s2, s);
//     return (char *)s2;
// }

// string code1(string s)
// {
//     string temp;
//     for (int i = 0; i < s.length(); ++i)
//     {
//         int v = int(s[i]);
//         temp += char(v + 1);
//     }
//     return temp;
// }

// string code2(string s)
// {
//     string temp;
//     for (int i = 0; i < s.length(); ++i)
//     {
//         unsigned int MASK = 4;
//         int v = int(s[i]) ^ MASK;
//         temp += char(v);
//     }
//     return temp;
// }