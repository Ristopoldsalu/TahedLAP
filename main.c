#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,l, counto = 0;
    char m[1000];

    do{
        gets(m);
        counto = 1;
        l = strlen(m);
        for (i = 0; i < l-1; i++){
            if (m[i] == m[i+1]){
                counto +=1;

            } else {
                printf("%c %d\n",m[i], counto);

                counto = 1;
            }
        }printf("%c %d\n", m[i], counto);
    } while(m != "");
}
