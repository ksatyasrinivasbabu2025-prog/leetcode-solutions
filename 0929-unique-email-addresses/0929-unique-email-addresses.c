int numUniqueEmails(char ** emails, int emailsSize)
{
    int result = 0;
    char cleanEmail[emailsSize][100];
    int clean=0;
    
    for(int i = 0; i < emailsSize; i++)
    {
        int index = 0; clean=0;
        while(emails[i][index] != '+' && emails[i][index] != '@')
        {
            if(emails[i][index] == '.')
                    index++;
            else
                {
                    cleanEmail[i][clean]=emails[i][index];
                    clean++;
                    index++;  
                } 
        }
        while(emails[i][index] != '@')
            index++;
        while(emails[i][index] != '\0')    
        {
            cleanEmail[i][clean]=emails[i][index];
            clean++;
            index++;
        }
       cleanEmail[i][clean] = '\0';
    }

    bool seen[emailsSize];
    for(int i=0;i<emailsSize;i++)
        seen[i]=false;
    int cnt=0;
    int j=0;
    for(j=0;j<emailsSize-1;j++)
    {
        for(int i=j+1;i<emailsSize;i++)
        {
            if(strcmp(cleanEmail[j],cleanEmail[i])==0)
            {
                printf("same\n");
                seen[j]=true;
            }
        }
    }
    for(int i=0;i<emailsSize;i++)
        if(seen[i]==false)
            cnt++;
    return cnt;
}