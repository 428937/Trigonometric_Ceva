#include <stdio.h>

int asal_sayılar[] = {11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int asal_sayı_adedi = 21;

int main() {
    int toplam_durum = 0;
    printf("Çözüm Tabloları:\n\n");

    for(int i = 0; i < asal_sayı_adedi; i++) {  
        int kadın = asal_sayılar[i];  
        int erkek = 100 - kadın;  

        int erkek_asal = 0;  
        for(int j = 0; j < asal_sayı_adedi; j++) {  
            if(asal_sayılar[j] == erkek) {  
                erkek_asal = 1;   
                break;}}  
        if(!erkek_asal || !(erkek > kadın && erkek <= 2 * kadın)) continue;  
        int kadın_hiç = (kadın - 20) / 3;  
        if((kadın - 20) % 3 != 0 || kadın_hiç < 0) continue;  

        int erkek_hiç = 10 - kadın_hiç;  
        if(erkek_hiç < 0) continue;  
        int kadın_çay = kadın_hiç + 10;  
        int kadın_kahve = kadın_çay;  
        int erkek_çay = erkek_hiç + 20;  
        int erkek_kahve = erkek_çay + 10;  

        int tk1 = 18;  

        for(int kç1 = 0; kç1 <= kadın_çay; kç1++) {  
            for(int kç2 = 0; kç2 <= kadın_çay - kç1; kç2++) {  
                int kç0 = kadın_çay - kç1 - kç2;  

                for(int kk1 = 0; kk1 <= kadın_kahve; kk1++) {  
                    int ek1 = tk1 - kk1;  
                    if (ek1 < 0 || ek1 > erkek_kahve) continue;  

                    for(int kk2 = 0; kk2 <= kadın_kahve - kk1; kk2++) {  
                        int kk0 = kadın_kahve - kk1 - kk2;  

                        for(int eç1 = 0; eç1 <= erkek_çay; eç1++) {  
                            int tç1 = kç1 + eç1;  
                            if (tç1 >= 18) continue;  

                            for(int eç2 = 0; eç2 <= erkek_çay - eç1; eç2++) {  
                                int tç2 = kç2 + eç2;  
                                if (tç2 >= 18) continue;  

                                int eç0 = erkek_çay - eç1 - eç2;  
                                int tç0 = kç0 + eç0;  
                                if (tç0 >= 18) continue;  

                                for(int ek2 = 0; ek2 <= erkek_kahve - ek1; ek2++) {  
                                    int tk2 = kk2 + ek2;  
                                    if (tk2 >= 18) continue;  

                                    int ek0 = erkek_kahve - ek1 - ek2;  
                                    int tk0 = kk0 + ek0;  
                                    if (tk0 >= 18) continue;  

                                    int toplam_şeker = tç1 + tk1 + 2 * (tç2 + tk2);  
                                    if(toplam_şeker != 90) continue;  

                                    int kadın_sayılar[7] = {kadın_hiç, kç0, kç1, kç2, kk0, kk1, kk2};  
                                    int kadın_farklı = 1;  
                                    for(int a = 0; a < 7 && kadın_farklı; a++) {  
                                        for(int b = a + 1; b < 7; b++) {  
                                            if(kadın_sayılar[a] == kadın_sayılar[b]) {  
                                                kadın_farklı = 0;  
                                                break;}}}  
                                    if(!kadın_farklı) continue;  

                                    int erkek_sayılar[7] = {erkek_hiç, eç0, eç1, eç2, ek0, ek1, ek2};  
                                    int erkek_farklı = 1;  
                                    for(int a = 0; a < 7 && erkek_farklı; a++) {  
                                        for(int b = a + 1; b < 7; b++) {  
                                            if(erkek_sayılar[a] == erkek_sayılar[b]) {  
                                                erkek_farklı = 0;  
                                                break;}}}  
                                    if(!erkek_farklı) continue;  

                                    int toplam_sayılar[7] = {10, tç0, tç1, tç2, tk0, tk1, tk2};  
                                    int toplam_farklı = 1;  
                                    for(int a = 0; a < 7 && toplam_farklı; a++) {  
                                        for(int b = a + 1; b < 7; b++) {  
                                            if(toplam_sayılar[a] == toplam_sayılar[b]) {  
                                                toplam_farklı = 0;  
                                                break;}}}  
                                    if(!toplam_farklı) continue;

                                   
                                    if (kç1 != eç1) continue;                
                                    if (kç0 != eç2 - 2) continue;           
                                    if (2 * kç0 != ek2) continue;           
                                    if (kk0 != ek1) continue;               
                                    

                                    toplam_durum++;  

                                    printf("--- Durum %d ---\n", toplam_durum);  
                                    printf("Kadın: %d | Erkek: %d \n\n", kadın, erkek);  
                                    printf("     İY     Ç0Ş    Ç1Ş    Ç2Ş    K0Ş    K1Ş    K2Ş     T\n");  
                                    printf("E   %3d    %3d    %3d    %3d    %3d    %3d    %3d    %3d\n",  
                                           erkek_hiç, eç0, eç1, eç2, ek0, ek1, ek2, erkek);  
                                    printf("K   %3d    %3d    %3d    %3d    %3d    %3d    %3d    %3d\n",  
                                           kadın_hiç, kç0, kç1, kç2, kk0, kk1, kk2, kadın);  
                                    printf("T   %3d    %3d    %3d    %3d    %3d    %3d    %3d    %3d\n",  
                                           10, tç0, tç1, tç2, tk0, tk1, tk2, 100);  
                                    printf("Ş    0      0     %3d    %3d     0     %3d    %3d     %d\n",  
                                           tç1, 2*tç2, tk1, 2*tk2, toplam_şeker);  
                                    printf("==================================================\n\n");}}}}}}}}  

    printf("Toplam durum sayısı: %d\n", toplam_durum);  
    return 0;}