#include <stdio.h>
#include <stdlib.h>

int main() {
	char s1[20], s2[20], s3[20];
	int i=0, j=-1;
	printf("Please enter the first word:\n");
	gets(s1);
	printf("Please enter the second word:\n");
	gets(s2);
	while(s1[i]!='\0'){
		j++;
		i++;
	}
	i=0;
	s3[j+1]='\0';
	while(s1[i]!='\0'){
		s3[j]=s1[i];
		i++;
		j--;
	}
	printf("%s %s",s2,s3);
	return 0;
}
