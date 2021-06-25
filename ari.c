#include<stdio.h>
#include<cs50>
#include<ctype.h>
#include<string.h>
#include<math.h>

stdin *ari(stdin *s)
{
    int noc = 0,now = 0; nos = 0;
    for (int i=0; s[i]!='\0' ; i++)
    {
        if (isalnum())
        {
        noc++;
        }
        else if (s[i]==' ')
        {
        now++;
        }
        else if (s[i]=='.')
        {
        nos++;
        }
    }
    
        float a=0;
        a= (4.71*(noc/now)+(0.5*(now/nos))-21.43;
        a=round(a);
          
        if (a==1)
            {
                return ("Kindergarten");
            }
        else if (a==2)
            {
                return ("First/Second Grade");
            }
        else if (a==3)
            {
                return ("Third Grade");
            }
        else if (a==4)
            {
                return ("Fourth Grade");
            }
        else if (a==5)
            {
                return ("Fifth Grade");
            }
        else if (a==6)
            {
                return ("Sixth Grade");
            }
        else if (a==7)
            {
                return ("Seventh Grade");
            }
        else if (a==8)
            {
                return ("Eighth Grade");
            }
        else if (a==9)
            {
                return ("Ninth Grade");
            }
        else if (a==10)
            {
                return ("Tenth Grade");
            }
        else if (a==11)
            {
                return ("Eleventh Grade");
            }
        else if (a==12)
            {
                return ("Twelfth Grade");
            }
        else if (a==13)
            {
                return ("College Student");
            }
        else if (a==14)
            {
                return ("Professor");
            }
}
