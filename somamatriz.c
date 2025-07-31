#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main ()
{
    int prop;

    scanf("%d",&prop);

    int mum[prop][prop];  // declara a primeira

    
    // le a primeira
    for (int i = 0; i < prop; i++) {
        for (int j = 0; j < prop; j++) {
            scanf("%d", &mum[i][j]);
        }
    }
    int mdois[prop][prop]; // declara a segunda

    // le a segunda
    for (int i = 0; i < prop; i++) {
        for (int j = 0; j < prop; j++) {
            scanf("%d", &mdois[i][j]);
        }
    }

    // printa a primeira
   // for (int i = 0; i < prop; i++) {
   //     for (int j = 0; j < prop; j++) {
    //        printf("%d ", mum[i][j]);
    //    }
  //      printf("\n");
   // }
    //printf("\n");

    // printa a segunda

   // for (int i = 0; i < prop; i++) {
    //    for (int j = 0; j < prop; j++) {
    //        printf("%d ", mdois[i][j]);
    //    }
    //    printf("\n");
    //}
    
    int msoma[prop][prop];

    for (int i = 0; i < prop; i++) {
        for (int j = 0; j < prop; j++) 
        {
            msoma[i][j] = mum[i][j] + mdois[i][j];

        }
    }
    printf("\n");

    for (int i = 0; i < prop; i++) {
        for (int j = 0; j < prop; j++) {
            printf("%d\n", msoma[i][j]);
        }
        
    }
    

    return 0;





}