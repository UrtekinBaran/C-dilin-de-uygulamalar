#include <stdio.h>

int main() {
    // degiskenlerin tanimlanmasi
    int ogrenci_sayisi, gecen_sayisi = 0, kalan_sayisi = 0;
    float vize, final, ortalama, toplam_ortalama = 0;

    // kullanicidan ogrenci sayisinin istenmesi
    printf("Siniftaki ogrenci sayisini giriniz: ");
    scanf("%d", &ogrenci_sayisi);

    // her bir ogrenci icin notlarinin alinmasi ve durumlarinin hesaplanmasi
    int i;
    for (i = 1; i <= ogrenci_sayisi; i++) {
        printf("%d. ogrencinin vize notunu giriniz: ", i);
        scanf("%f", &vize);

        printf("%d. ogrencinin final notunu giriniz: ", i);
        scanf("%f", &final);

        ortalama = (vize + final) / 2; // vize ve final notunun ortalamasinin hesaplanmasi
    
        if (ortalama >= 50) {
            printf("Gecti!\n");
            gecen_sayisi++;
        } else {
            printf("Kaldi!\n");
            kalan_sayisi++;
        }

        toplam_ortalama += ortalama;
    }

    // gecen ve kalan ogrenci sayisinin ekrana yazdirilmasi
    printf("Gecen ogrenci sayisi: %d\n", gecen_sayisi);
    printf("Kalan ogrenci sayisi: %d\n", kalan_sayisi);

    // sinifin basari ortalamasinin yuzde olarak ekrana yazdirilmasi
    float ortalama_yuzde = (toplam_ortalama / ogrenci_sayisi) ;
    printf("Sinifin basari ortalamasi: %.2f%%", ortalama_yuzde);

    return 0;
}
