#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1001];
    scanf("%[^\n]",s);
    int freq[10]={0};
    
    for(int i=0;i<strlen(s);i++){
        if (s[i] >='0'&& s[i]<='9'){
            freq[s[i]-'0']++;
        }
    }
    
    
    for(int i=0;i<10;i++){
        printf("%d ",freq[i]);
    }



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
