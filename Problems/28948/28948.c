//https://quera.ir/problemset/contest/28948/
//Solve By: Ahmadrezadl
#include <stdio.h>
#include <string.h>

int main(){
	char input[100000];
	scanf("%s" , &input);
	int i = 0;
	int j;
	int k = strlen(input);
	while (input[i] != ' ')
	{
		if (input[i] == '=')
		{
			input[i] = '@';
			j = i;
			while(input[j] == '@')
			{
				j--;
			}
			input[j] = '@';
			i++;
		}
		else
		{
			i++;
		}
	}
	i = 0;
	while (k--)
	{
		if (input[i] != '@' && input[i] != ' ')
		printf("%c" , input[i]);
		i++;
	}
}
