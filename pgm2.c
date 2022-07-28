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
        if(state==0 && SString[i]=='0')
    	{
    	    	state=1;
    	}
    	
    	
    	else if(state==1)
    	{
    		if(SString[i]=='0')
    		{
    		state=2;
    		}
    	}
    
   	else if(state==2)
    	{
    		if (SString[i]=='0')
    		{
    		state=1;
    		}
    		else
    		state=2;
    	}


    }
    
    if(state==2)
	{
    	printf("Valid String");
    	printf("%d",state);
    	}
    else
    	{
    	printf("Invalid String");
    	printf("%d",state);
 	}   
    }
