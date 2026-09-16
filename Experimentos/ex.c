#include <stdio.h>
#include <stdlib.h>
void timer(){
    int cont = 0;
    long tempo,fps;
    fps = 30000000;
    tempo = fps;
    for (int i = 0; i < 30000000; i++)
    {
        cont++;
    }
}
int main(){
    int i = 1;
    while (i == 1)
    {
        printf("|\n");
        timer();
        printf(" |\n");
        timer();
        printf("  |\n");
        timer();
        printf("   |\n");
        timer();
        printf("    |\n");
        timer();
        printf("     |\n");
        timer();
        printf("    |\n");
        timer();
        printf("   |\n");
        timer();
        printf("  |\n");
        timer();
        printf(" |\n");
        timer();

    }
    
}