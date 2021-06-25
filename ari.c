#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

char ari(char s)
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
    
    float ARI=0;
    ARI= (4.71*(noc/now)+(0.5*(now/nos))-21.43;
    ARI=round(ARI);
    
    
    
}
