#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<iostream>
struct stud
{
	char name[5];
	int no_gifts;
}s[10];
int main()
{
	printf("Enter the gifts of each students:\n");
	for(int i=0; i<10; i++)
	{
		printf("student name :\t");
		scanf("%s",&s[i].name);
		printf("No fo gifts :\t");
		scanf("%d",&s[i].no_gifts);
	}
	
	for(int i=0; i<9; i++)
	{
		for(int j=0; j<10-i-1; j++)
		{
			if(s[j].no_gifts<s[j+1].no_gifts)
			{
				stud g = s[j];
				s[j] =s[j+1];
				s[j+1] = g;
			}
		}
		
	}
	system("cls");
	for(int i=0;i<10;i++)
	{
		printf("priority %d to Student %s with %d gifts\n",i+1,s[i].name,s[i].no_gifts);
	}
	
}
