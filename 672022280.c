#include <stdio.h>
#include <stdlib.h>

int main(){
int i, j, k, n;

{
    printf("===============\n");
    printf("Tugas Menu Kuiz\n");
    printf("===============\n");
    printf("1.   Level 1   \n");
    printf("2.   Level 2   \n");
    printf("3.   Level 3   \n");
    printf("4.   Exit      \n");
    printf("===============\n");
    printf("Masukan Pilihan :");
    scanf("%d", &n);

    switch(n){
     int i,j,k,n;
   case 1 :
       printf("Masukan Angka :");
       scanf("%d",&n);
       for(i=0; i<=n; i++){
           for(j=0; j<=i;j++){
           printf("%3d", i+j);

           }
          printf("\n");
           }
        break;

   case 2 :
        printf("Masukan Angka :");
        scanf("%d",&n);
       for(i=0; i<=n; i++){
       for(i=0; i<=n; i++){
           for(j=1; j<=i;j++){
           printf("%3d", i*j);

           }
          printf("\n");
           }
        break;
    }
   case 3:
     printf("Masukan Angka :");
        scanf("%d",&n);
         for (i=1; i<=n; i++){
                for (j=1; j<=n-i; j++){
                printf(" ");
                }
            for (k=1; k<=i; k++){
                printf("%d", k);
                }
            for (j=i-1; j>=1; j--){
                printf("%d", j);
                }
                printf("\n");
            }
            for (i=n-1; i>=1; i--){
                for (k=1; k<=n-i; k++){
                printf(" ");
                }
            for (j=1; j<=i ;j++){
                printf("%d", j);
                }
            for (j=i-1; j>=1; j--){
                printf("%d", j);
                }
                printf("\n");
            }
            break;

   case 4:
    printf("Anda Akan Keluar Dari Menu");
    break;

  default:
      printf("Pilihan Tidak Ada!!!");
      break;
}
}
}
