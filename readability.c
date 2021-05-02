#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>

int main()
{
    string text= get_string("Text: ");



    int nw = 1, ns = 0,nl=0;


    for( int i=0, n = strlen(text); i < n; i++)
    {
        if (text[i] == 32)
        {
            nw++; //counting words
        }

        else if ((text[i] >= 'a' && text[i] <= 'z') ||( text[i] >= 'A' && text[i] <= 'Z') )
        {
            nl++; //counting letters
        }

        else if (text[i] == '.' || text[i] == '?' || text[i] == '!' )
        {
            ns++; //counting sentences
        }

    }


   float L= 100 * (float) nl / (float) nw;
   
   float S= 100 * (float) ns / (float) nw;

    float index = 0.0588 * (L) - 0.296 * (S) - 15.8;
    index= round(index);

    if ( index < 1)
    {
        printf("Before Grade 1\n");

    }

    else if (index > 16)
    {
        printf("Grade 16+\n");
    }

    else
    {
        printf("Grade %d\n",(int)index);
    }
}