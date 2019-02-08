#include <stdio.h>
#include <string.h>
int firstKey(char f[32]);
int everyKey(char e[32]);
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    char st[50];
    gets(st);
    if(strlen(st)>32){
        puts("no");
    }
    else{
        if(firstKey(st)==0){
            puts("no");
        }
        else{
            if(everyKey(st)==0){
                puts("no");
            }
            else{
                puts("yes");
            }
        }
    }
    return 0;
}

int firstKey(char f[32])
{
    int num=0;
    if(f[0]>=65 && f[0]<=90 || f[0]>=97 && f[0]<=122 || f[0]==95)
        num=1;
    return num;
}
int everyKey(char e[32])
{
    int num=1;
    int i=1;
    int sl=strlen(e);
    while(i<sl){
        if(e[i]>=32 && e[i]<=47 || e[i]>=58 && e[i]<=64 || e[i]>=91 && e[i]<=94 || e[i]==96 || e[i]>=123){
            num=0;
            break;
        }
        i++;
    }
    return num;
}
