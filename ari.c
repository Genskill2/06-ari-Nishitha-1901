#include<stdio.h>
#include<cs50,h>
#include<ctype.h>
#include<string.h>
#include<math.h>

string ari(string s)
{
    int noc = 0,now = 0; nos = 0;
    for (int i=0; s[i]!='\0' ; i++)
    {
        if (isalnum(s[i]))
        {
        noc++;
        }
        else if (s[i]==' ')
        {
        now++;
        }
        else if (s[i]=='.' || s[i]=='?' || s[i]=='!')
        {
        nos++;
        }
    }
    
        float a=0;
        a= (4.71*((float)noc/(float)now)+(0.5*((float)now/(float)nos))-21.43;
        int r_a=a+1;
          
        if (r_a==1)
            {
                return ("Kindergarten");
            }
        else if (r_a==2)
            {
                return ("First/Second Grade");
            }
        else if (r_a==3)
            {
                return ("Third Grade");
            }
        else if (r_a==4)
            {
                return ("Fourth Grade");
            }
        else if (r_a==5)
            {
                return ("Fifth Grade");
            }
        else if (r_a==6)
            {
                return ("Sixth Grade");
            }
        else if (r_a==7)
            {
                return ("Seventh Grade");
            }
        else if (r_a==8)
            {
                return ("Eighth Grade");
            }
        else if (r_a==9)
            {
                return ("Ninth Grade");
            }
        else if (r_a==10)
            {
                return ("Tenth Grade");
            }
        else if (r_a==11)
            {
                return ("Eleventh Grade");
            }
        else if (r_a==12)
            {
                return ("Twelfth Grade");
            }
        else if (r_a==13)
            {
                return ("College Student");
            }
        else if (r_a==14)
            {
                return ("Professor");
            }
}
