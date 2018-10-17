#include <stdio.h>
#include <string.h>
#include <time.h>
void typed_text();

int main(){
    typed_text("Hello world...");
    return 0;
}

void typed_text(char x[100]){
    int l = strlen(x);
    int t = 0;

    int realtime = clock();

    while(t<=l){

        int n = 0;
        while(n <= t){
            printf("%c",x[n]);
            n++;
        }

        int clk = realtime+t*200;
        while(clock()<clk);
        system("cls");

        t++;
    }

    //wait 1 second
    realtime = realtime + 1000;
    while(clock()<realtime);


    //start backspace
    int k = l-1;
    int m = 1;
    while(k >= 0){

        int n = 0;
        while(n <= k){
            printf("%c",x[n]);
            n++;
        }
        int reclk = realtime+l*200;
        int clk = m*200;
        while(clock()<(reclk+clk));
        system("cls");
        k--;
        m++;
    }
}
