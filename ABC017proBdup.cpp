#include<stdio.h>
char p[110];
int main()
{
	int i;
	scanf("%s", p);
	for (i = 0; p[i]; i++){
		if (p[i] == 'c' && p[i + 1] == 'h'){
			i++;
			continue;
		}
		if (p[i] == 'o')continue;
		if (p[i] == 'k')continue;
		if (p[i] == 'u')continue;
		break;
	}
	if (p[i])printf("NO\n");
	else printf("YES\n");
}
