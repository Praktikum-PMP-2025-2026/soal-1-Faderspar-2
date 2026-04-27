/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 03
 *   Hari dan Tanggal    : Senin, 27 April 2026
 *   Nama (NIM)          : Fauzan (13224025)
 *   Nama File           : soal1.c
 *   Deskripsi           : Membuat program yang bisa menghitung count, sort data dan median menggunakan array dinamis.
 * 
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 //Untuk compare (Referensi sama kayak TP)
 int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);  
}


 int main() {
    //Deklarasi awal dulu
    int *angka = NULL ;
    int input ;
    int count = 0 ;

    //Baca input biar end di -1
    while (scanf("%d", &input) != -1) {
        count++ ;
        //realloc
        int *yessir = (int*)realloc(angka,count*sizeof(int)) ;
        if (yessir == NULL) {
            if (angka != NULL) {
                free(angka);
            }
        }
        angka = yessir ;
        angka [count-1] = input ;
    }  
qsort(angka, sizeof(int),count, compare ) ;

//Print dulu semuanya
printf("COUNT %d\n", count) ;
printf("SORTED") ;
//sorting buat sorted
for (int i = 0; i < count ; i++){
    printf("%d", angka[i]) ;
    
}
//Untuk ngatur median (Referensi di laporan)
if (count %2 == 0) {
    printf("MEDIAN %d\n", angka[count]/2-1);

} else {
    printf("MEDIAN %d\n",angka[count]/2 +angka[count]/2-1) ;

}
if (angka != NULL) {
    free(angka) ;
}
         
    
 }
