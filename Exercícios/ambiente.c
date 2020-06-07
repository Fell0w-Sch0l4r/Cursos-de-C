#import <stdio.h>
#import <time.h>
#import <stdlib.h>
void main(){
    srand(time(NULL));
    int n = rand() % 20;
    printf("Gerou o numero (%d)",n);
}
