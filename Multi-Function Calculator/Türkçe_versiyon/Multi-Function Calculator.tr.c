#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// İşletim sistemine göre ekran temizleme komutu tanımlaması
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

int main() {
    int i, secim, num1, num2, num3, num4; // Değişken tanımlamaları
    float a, b, c; // Ondalıklı sayı işlemleri için tanımlama
    char k[30], devam; // Metin ve işlem devam durumu için değişkenler

    // Ana Menü Başlığı
    printf("*******************\n");
    printf("**     MENU     **\n");
    printf("*******************\n\n");

    // Ana döngü
    while (1) {
        printf("Yapmak istediginiz islemi asagidan seciniz:\n\n");
        printf("1- Sayininin ussunu hesaplama \n");
        printf("2- Ucgenin alanini hesaplama\n");
        printf("3- Dortgenin cevresini hesaplama \n");
        printf("4- 4 islem  \n");
        printf("5- Istediginiz bir kelimeyi istediginiz kadar yazdirma \n");
        printf("0- Programdan cikis \n\n");

        // Kullanıcıdan seçim alınıyor
        printf("Sectiginiz islem numarasi: ");
        scanf("%d", &secim);
        printf("\n\n");

        switch (secim) {
            case 0: // Programdan çıkış
                printf("Programdan cikis yapmak icin bir tusa basiniz...\n");
                exit(0);
                break;

            case 1: { // Sayının üssünü hesaplama
                printf("Taban sayisini giriniz: ");
                scanf("%d", &num1);
                printf("Us sayisini giriniz: ");
                scanf("%d", &num2);
                num3 = 1;

                // Üs hesaplama döngüsü
                for (i = 0; i < num2; i++) {
                    num3 = num3 * num1;
                }

                printf("Sonuc: %d\n\n", num3);
                break;
            }

            case 2: { // Üçgen alanı hesaplama
                printf("Ucgenin taban uzunlugunu giriniz (cm): ");
                scanf("%f", &a);
                printf("Ucgenin yukseklik uzunlugunu giriniz (cm): ");
                scanf("%f", &b);

                c = (a * b) / 2;
                printf("Ucgenin alani: %.2f cm^2\n\n", c);
                break;
            }

            case 3: { // Dikdörtgen çevresi hesaplama
                printf("Dikdortgenin uzun kenarini giriniz: ");
                scanf("%d", &num1);
                printf("Dikdortgenin kisa kenarini giriniz: ");
                scanf("%d", &num2);

                num3 = (num1 + num2) * 2;
                printf("Dikdortgenin cevresi: %d cm\n\n", num3);
                break;
            }

            case 4: { // Dört işlem (Toplama, Çıkarma, Çarpma, Bölme)
                printf("Toplama(1)\nCikarma(2)\nCarpma(3)\nBolme(4)\n");
                printf("Seciminizi yapiniz: ");
                scanf("%d", &num1);

                switch (num1) {
                    case 1: // Toplama
                        printf("Birinci sayiyi giriniz: ");
                        scanf("%d", &num2);
                        printf("Ikinci sayiyi giriniz: ");
                        scanf("%d", &num3);
                        num4 = num2 + num3;
                        printf("Sonuc: %d\n\n", num4);
                        break;

                    case 2: // Çıkarma
                        printf("Birinci sayiyi giriniz: ");
                        scanf("%d", &num2);
                        printf("Ikinci sayiyi giriniz: ");
                        scanf("%d", &num3);
                        num4 = num2 - num3;
                        printf("Sonuc: %d\n\n", num4);
                        break;

                    case 3: // Çarpma
                        printf("Birinci sayiyi giriniz: ");
                        scanf("%d", &num2);
                        printf("Ikinci sayiyi giriniz: ");
                        scanf("%d", &num3);
                        num4 = num2 * num3;
                        printf("Sonuc: %d\n\n", num4);
                        break;

                    case 4: // Bölme
                        printf("Bolunen sayiyi giriniz: ");
                        scanf("%f", &b);
                        printf("Bolen sayiyi giriniz: ");
                        scanf("%f", &c);
                        a = b / c;
                        printf("Sonuc: %.2f\n\n", a);
                        break;

                    default:
                        printf("Gecersiz bir secim yaptiniz!\n\n");
                        break;
                }
                break;
            }

            case 5: { // Kelimeyi tekrar yazdırma
                printf("Yazdirmak istediginiz kelimeyi giriniz: ");
                scanf(" %[^\n]s", k);
                printf("Kac kere yazdirmak istiyorsunuz: ");
                scanf("%d", &num1);
                printf("Yan yana (1), Alt alta (2): ");
                scanf("%d", &num2);

                if (num2 == 1) { // Yan yana yazdırma
                    for (i = 0; i < num1; i++) {
                        printf("%s ", k);
                    }
                } else if (num2 == 2) { // Alt alta yazdırma
                    for (i = 0; i < num1; i++) {
                        printf("%s\n", k);
                    }
                } else {
                    printf("Hatali secim!\n\n");
                }
                break;
            }

            default: // Geçersiz seçim
                printf("Gecersiz bir secim yaptiniz!\n\n");
                break;
        }

        // Yeni işlem yapma veya çıkış seçeneği
        printf("\nYeni bir islem yapmak icin (e/E) tusuna basin, cikmak icin (q/Q) tusuna basin: ");
        scanf(" %c", &devam);
        if (devam == 'e' || devam == 'E') {
            system(CLEAR);
        } else if (devam == 'q' || devam == 'Q') {
            printf("Programdan cikis yapmak icin bir tusa basiniz...\n");
            exit(0);
        }
    }
    return 0;
}
