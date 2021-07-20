#include <stdio.h>
#include "librarayOne.h"
#include "librarayTwo.h"
#include <stdlib.h>
#include <assert.h>
/**
 *
 * @author (Mofadhal Al-Manari und Leen Alkhadraa)
 * @version (13.07.2021)
 */

int compare (int a, int b) {
    if(a < b)
        return -1;

    if(a == b)
        return 0;

    if(a>b)
        return 1;
}

void swap (int* a, int* b){
    int x = *a;
    int y = *b;
    *a = y;
    *b = x;

}

void sort(int* arr, int len){

    for(size_t i = 0; i<= len; i++){
        for(size_t j = len ;j >= i+1; j-- ){

            if(compare(arr[j-1], arr[j]) == 1){
                swap(&arr[j-1], &arr[j]);}
            //printf("%d	:::	%d\n", *(arr+(j-1)), *(arr+j));

        }

    }

}

void test(){
    const int size = 8;
    int array[] = {-4,2,-6,2,-100,9,82,-1};

    sort(array,size);
    for(int i = 0 ; i < size ; i++){


        printf("%d :	%d  \n",i, array[i]);
    }
    printf("\n");

}
/*
i Geschwindigkeit: v := ∆s
∆t
ii Beschleunigung: a := ∆v
∆t
iii Impuls: p := m · v
Die zweite Bibliothek soll Funktionen zur Berechnung geradliniger Bewegungen beinhalten:
i Weg einer gleichförmigen geradlinigen Bewegung: s = v · (t − t 0 )
v 2 −v 2
ii Weg einer gleichmäßig beschleunigten geradlinigen Bewegung: s = 2a 0
iii Geschwindigkeit einer gleichmäßig beschleunigten geradlinigen Bewegung:
*/



int main(int argc, char** argv){
    float Masse , Zeit , Geschwindigkeit ,  zz , a ,vz , tz;
    int c = 0;
    int x = 1;
    while (x != 0){
      printf("	\nGeben Sie bitte an, was berechnet werden muss : 	\n 0) Exit\n 1) Geschwindigkeit\n 2) Beschleunigung\n "
             "3) Impuls\n 4) Weg einer gleichformigen geradlinigen Bewegung\n 5) Weg einer gleichmassig beschleunigten geradlinigen Bewegung\n "
             "6) Geschwindigkeit einer gleichmassig beschleunigten geradlinigen Bewegung\n 7) Aufgabe2\n");

      scanf("%d", &c );
      //  printf("%d\n", c);

        switch(c){
            case 0:
                printf("	Ende Programm\n");
                exit(0);
                case 1 : {
                    printf("Geben Sie bitte Masse\n");
                    scanf("%f", &Masse);
                    printf("Geben Sie bitte Zeit\n");
                    scanf("%f", &Zeit);
                    printf("\n\n	***	Geschwindigkeit betragt : %f	***	 \n\n\n", geschwindigkeit(Masse, Zeit));
                    break;
                }
            case 2: {
            printf("Geben Sie bitte Geschwindigkeit\n");
            scanf("%f", &Geschwindigkeit);

            printf("Geben Sie bitte Zeit\n");
            scanf("%f", &Zeit);

            printf("\n\n	***	Beschleunigung betragt : %f	***	 \n\n\n", beschleunigung(Geschwindigkeit, Zeit));
            break;
            }
            case 3: {
                printf("Geben Sie bitte Geschwindigkeit\n");
                scanf("%f", &Geschwindigkeit);

                printf("Geben Sie bitte Masse\n");
                scanf("%f", &Masse);

                printf("\n\n	***	Impuls betragt : %f	***	 \n\n\n", impuls(Geschwindigkeit, Masse));
                break;
            }
            case 4: {

                printf("Geben Sie bitte Geschwindigkeit\n");
                scanf("%f", &Geschwindigkeit);

                printf("Geben Sie bitte Zeit\n");
                scanf("%f", &Zeit);

                printf("Geben Sie bitte die Anfangszeit\n");
                scanf("%f", &zz);

                printf("\n\n	***	WggB betragt : %f	***	 \n\n\n", wggb(Geschwindigkeit, Zeit, zz));
                break;
            }
            case 5: {
            printf("Geben Sie bitte Geschwindigkeit\n");
            scanf("%f", &Geschwindigkeit);

            printf("Geben Sie bitte AnfangsGeschwindigkeit\n");
            scanf("%f", &vz);

            printf("Geben Sie bitte die Beschleunigung\n");
            scanf("%f", &a);

            printf("\n\n	***	WgbgB betragt : %f	***	 \n\n\n", wgbgb(a, Geschwindigkeit, vz));
            break;
            }
            case 6: {
                printf("Geben Sie bitte Beschleunigung\n");
                scanf("%f", &a);
                printf("Geben Sie bitte AnfangsGeschwindigkeit\n");
                scanf("%f", &vz);
                printf("Geben Sie bitte die Zeit\n");
                scanf("%f", &Zeit);
                printf("Geben Sie bitte die Anfangszeit\n");
                scanf("%f", &zz);
                printf("\n\n	***	GgbgB beträgt : %f	***	 \n\n\n", ggbgg(a, Zeit, zz, vz));
                break;
            }
            case 7:{
                  test();
                  break;
            }
            default:{
                printf("Falsche Eingabe");
            }
      }

  }
    return 0;
}
