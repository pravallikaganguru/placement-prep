int lengthOfLastWord(char* s) 
{
    int len,i,j=0;
    len=strlen(s);
    i=len-1;
    while(i>=0&&s[i]==' ')
    {
        i--;
    }
    for(i;i>=0;i--)
    {
        if(s[i]==' ')
        {
            break;
        }
        j++;
    }
    
    return j;
    
}