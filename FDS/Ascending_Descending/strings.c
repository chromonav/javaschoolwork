*
 * Sort the set of strings in ascending order using bubble sort
 *and descending order by using insertion sort(display pass by pass output)
 */
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void getData(char s[][50],int n) {
    int i;
    for(i=0;i<n;i++) {
            printf("\nEnter the %d string\n",i+1);
            scanf("%s",s[i]);

        }
}
void bsort(char s[][50],int n) {
    char temp[50];
    int i,j,k;
    for(i=0;i<n-1;i++) {
            for (j=0; j<n-i-1; j++) {
                if(strcmp(s[j],s[j+1])==1) {
                    strcpy(temp,s[j]);
                    strcpy(s[j],s[j+1]);
                    strcpy(s[j+1],temp);
                }
            }
            printf("After %d pass\n",i+1);
            for(k=0;k<i;k++) {
                printf("%s",s[k]);
            }
            printf("\n");
        }
        for(i=0;i<n;i++) {
            printf("%s\n",s[i]);
        }
}
void isort(char s[][50],int n) {

}
int main() {
    int n,opt;
    printf("Enter the number of strings\n");
    scanf("%d",&n);
    char s[n][50];

    while(1) {
        printf("2.Ascending order using Bubble Sort\n3.Descending order using insertion sort\n4.Exit\n");
            scanf("%d",&opt);
            switch(opt) {
            case 1: {
                getData(s,n);
                break;
            }
                case 2: {
                    bsort(s,n);
                    break;
                }
                case 3: {
                    isort(s,n);
                    break;
                }
                case 4 :
                exit(0);
            }
    }

    return 0;
}