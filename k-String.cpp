#include<bits/stdc++.h>

using namespace std;

char* strStr(char *s,int k)
{
	static int x;
	int count,i,j;
	char str[1000];
	for(i=0;i<strlen(s)-1;i++)
	{
		if(s[i]=='1')
			continue;
		count = 1;
		for(j=i+1;j<strlen(s);j++)
		{
			if(s[i]==s[j] && s[j]!='1')
			{
				//s[i] = '1';
				s[j] = '1';
				count++;
			}
		}

		if(count%k==0)
		{
			int c=0;
			for(x=0;c<count/k;x++,c++)
			{
				str[x] = s[i];
			}
		}
		else if(count%k!=0)
			return 0;
	}
	str[x] = '\0';
	return str;

}

int main()
{
	int kn;
	cin>>kn;
	char ch[1000];
	scanf("%s",ch);
	if(strStr(ch,kn)==0) cout<<"-1"<<endl;
	else
	{
		printf("%s",strStr(ch,kn));
	}

//	getch();
	return 0;
}
