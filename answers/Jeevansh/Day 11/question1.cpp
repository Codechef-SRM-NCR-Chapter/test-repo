#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,arr[26],count,flag;
	char str[100];
	count=flag=0;
	cout<<"Enter string\n";
	gets(str);
	for(i=0;i<26;i++)
	{
		arr[i]=0;
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
		  arr[str[i]-'a']++;	
		}
		if(str[i]>='A'&&str[i]<='Z')
		{
		  arr[str[i]-'A']++;	
		}
	}
		for(i=0;i<26;i++)
		{
			if(arr[i]%2!=0)
			{
				count++;
			}
		}
		if(count>1)
		{
			flag=1;
		}
		if(flag==1)
		{
			cout<<"\nNO\n";
		}
		else cout<<"\nYES\n";
return 0;
}
