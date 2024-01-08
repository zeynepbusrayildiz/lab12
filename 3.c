#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[100];
	printf("Write something:");
	gets(str);
	int vow=0, con=0, num=0, blank=0, other=0, i=0;
	while(str[i]!='\0'){
		if(str[i]==32) blank++;
		else if(str[i]>47&&str[i]<58) num++;
		else if(str[i]>64&&str[i]<91||str[i]>96&&str[i]<123){
			if(str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85||str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117) vow++;
			else con++;
		}
		else other++;
		i++;
	}
	printf("Vowels: %d  Consonants: %d  Numbers: %d  White Spaces: %d  Other: %d",vow,con,num,blank,other);
	return 0;
}
