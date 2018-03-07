#include<iostream>
#include<conio.h>
char mostFreq(string text)
{
 int maximum=0;
 int count=0;
 char maxCharcter;
 for(char q=' ' ;q<='~' ;q++ )
    {
        count = 0;
        for(int i=0; i<text.length();i++)
        {
            if(text[i]==q)
                count++;
        }
        
        if(count>maximum)
        {
            maximum=count;
            maxCharcter=q;
        }
    }
    return maxCharcter;
    }
