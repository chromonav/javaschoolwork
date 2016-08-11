//This is the C Program for Binary Search

#include <stdio.h>
#include <string.h>
void search(char s[][50],char key[50],int start,int end) {
		int mid = (start+end)/2;
		if(start<end) {
			search(s,key,start,mid);
		}
		if(start<end) {
			search(s,key,mid+1,end);
		}
	if(start==end && strcmp(s[start],key)==0) {
		printf("The Element to be searched %s was found",key);
	}
}
int main() {
	int n,i,j;
	printf("Enter the Number of Strings you want\n");
	scanf("%d",&n);
	char s[n][50],swap[50],key[50];
	printf("Now Enter the Strings one-by-one\n");
	for(i=0;i<n;i++) {
		scanf("%s",s[i]);
	}

	//Now sorting the Strings

	printf("Now Enter the Element to be searched\n");
	scanf("%s",key);
	for(i=0;i<n;i++) {
		for(j=1;j<n-i;j++) {
			if(strcmp(s[j],s[j+1])>0) {
				strcpy(swap,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],swap);
			}
		}
	}
	search(s,key,0,n);
}
