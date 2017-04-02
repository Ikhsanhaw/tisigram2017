#define true 1
#define false 0
#define boolean unsigned char

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int palindrome(char* string)
{
    size_t len = strlen(string);

    // handle empty string and string of length 1:
    if (len == 0) return 0;
    if (len == 1) return 1;

    char *ptr1 = string;
    char *ptr2 = string + len - 1;
    while(ptr2 >= ptr1) {
        if (!isalpha(*ptr2)) {
            ptr2--;
            continue;
        }
        if (!isalpha(*ptr1)) {
            ptr1++;
            continue;
        }
        if( tolower(*ptr1) != tolower(*ptr2)) {
            return 0;
        }
        ptr1++; ptr2--;
    }
    return 1;
}


int pa (char* s, int k, int l) {
    boolean cek;
    int i;

    cek = true;
    for (i = 0; i <= (l/2); i++) {
        if (s[k+i] != s[l-i]) cek= false;
    }
    if (cek) return 1; else return 0;
}


int main() {
    int n, count, x;
    char s1[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        count = 0;
        scanf("%s", s1);
        x= strlen(s1);
        printf("%d\n", x);
        count+= x;
        for (int j = 0; j < x-1; j++) {
            for (int k = 1; k < x-j; k++) {
                count += pa(s1, j, j+k);
            }
        }
        printf("%d\n", count);
        /*
        while (x>=0) {
            if (palindrome(s1)) count++;
            s1[strlen(s1) - 1] = '\0';
            printf("%s\n",s1 );
            x--;
        }
        */
    }
    return 0;
}

/*
function pa(s: ansistring;k,l: integer): integer;
var
    cek : boolean;
    i   : integer;
begin
    cek:=true;
    for i:=0 to (l div 2)-1 do
        if s[k+i] <> s[l-i] then cek:=false;
    if cek=true then pa:=1 else pa:=0;
end;


var
    s           : ansistring;
    i,j,n,sum   : integer;

begin
    readln(s);
    n:= length(s);
    sum:=sum+n;
    for i:=1 to n-1 do
        for j:=2 to (n-i) do
            sum:=sum+pa(s,i,i+j);
    writeln(sum);
end.
*/