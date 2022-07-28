/*To implement a dfa to accept binary strings having at least 2 consecutive zeros*/

#include <stdio.h>
#include<string.h>
int main()
{
    char SString[30];
    int state=0,len;
    printf("Enter string: ");
    fgets(SString, sizeof(SString), stdin);  // read string
    printf("string is: ");
    puts(SString);    // display string
    
    len=strlen(SString);
    for(int i=0;i<len;i++)
    {
        if (state==3)
    	{
     		if (SString[i]=='0')
         	state=2;
    	}
    
    	else if (state==2)
    	{
      		if (SString[i]=='1')
       		{
         	state=3;
         	}
    	}
      
    	else if (state==1)
        {
       		if (SString[i]=='0')
         	{
         	state=2;
         	}
       		else
       		state=0;
       
      	}
    	if (SString[i]=='0' && state==0)
      	{
       	state=1;
      	}

    }
    
    if (state==2||state==3)
    {
    printf("The string is a valid string");
    printf("%d",state);
    }
    else
    printf("The string is not valid");
    return 0;
}
