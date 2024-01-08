#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[100];
	int i=0, cnt=0, kel=1;
	printf("Lutfen bir cumle giriniz...\n");
	gets(str);
	while(str[i]!='\0'){
		while(str[i]!=32&&str[i]!='\0'){
			if(str[i]==97) cnt++;
			i++;
		}
		printf("%d.kelimede %d tane a  harfi vardir.\n", kel, cnt);
		kel++;
		i++;
		cnt=0;
	}
	return 0;
}
