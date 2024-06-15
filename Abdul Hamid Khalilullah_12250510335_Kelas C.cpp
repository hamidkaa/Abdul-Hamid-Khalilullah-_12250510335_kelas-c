#include <stdio.h>

int main() {
    int saldo = 10000000; // initial balance
    int nomor_rekening;
    int pilihan;
    int jumlah_tarik;
    int jumlah_setor;
    int nomor_rekening_tujuan;
    int attempts = 0; // count of incorrect PIN attempts

    	printf("====================================================\n");
        printf("=====                                          =====\n");
        printf("=====             SELAMAT DATANG               =====\n");
        printf("=====                   DI                     =====\n");
        printf("=====                 BANK HK                  =====\n");
        printf("=====                                          =====\n");
        printf("====================================================\n");
        printf("====================================================\n");
        
    printf("Masukkan nomor rekening: ");
    scanf("%d", &nomor_rekening);

    if (nomor_rekening == 1454) { // valid account number
        printf("Masukkan PIN: ");
        int pin;
        scanf("%d", &pin);

        if (pin == 9223) { // valid PIN
        	printf("\n");
        	printf("=====             Login Berhasil               =====\n");
        	printf("\n");
            

            while (1) {
            	printf("=====                                          =====\n");
            	printf("=====                                          =====\n");
            	printf("=====     Silahkan Tentukan Pilihan Anda :\n");
                printf("\n");
                printf("=====  1. Cek Saldo                            =====\n");
                printf("=====  2. Tarik Tunai                          =====\n");
                printf("=====  3. Setor Tunai                          =====\n");
                printf("=====  4. Transfer                             =====\n");
                printf("=====  5. Keluar                               =====\n");
                printf("\n");
                printf("=====     Masukkan pilihan: ");
                scanf("%d", &pilihan);

                switch (pilihan) {
                    case 1:
                    	printf("\n");
                		printf("=====    Saldo Anda: Rp %d\n", saldo);
                        printf("\n");
                        break;
                    case 2:
                        printf("=====                  Tarik Tunai             =====\n");
                        printf("=====  Opsi:\n");
                        printf("=====  1. Rp 50.000                            =====\n");
                        printf("=====  2. Rp 100.000                           =====\n");
                        printf("=====  3. Rp 200.000                           =====\n");
                        printf("=====  4. Rp 500.000                           =====\n");
                        printf("=====  Masukkan opsi: ");
                        scanf("%d", &jumlah_tarik);

                        switch (jumlah_tarik) {
                            case 1:
                                if (saldo >= 50000) {
                                    saldo -= 50000;
                        			printf("=====  Anda telah menarik Rp 50.000            =====\n");
                                    printf("=====  Saldo Anda: Rp %d\n", saldo);
                                } else {
                                    printf("=====  Saldo tidak cukup                       =====\n");
                                }
                                break;
                            case 2:
                                if (saldo >= 100000) {
                                    saldo -= 100000;
                                    printf("=====  Anda telah menarik Rp 100.000           =====\n");
                                    printf("=====  Saldo Anda: Rp %d\n", saldo);
                                } else {
                                    printf("=====  Saldo tidak cukup                       =====\n");
                                }
                                break;
                            case 3:
                                if (saldo >= 200000) {
                                    saldo -= 200000;
                                    printf("=====  Anda telah menarik Rp 200.000           =====\n");
                                    printf("=====  Saldo Anda: Rp %d\n", saldo);
                                } else {
                                    printf("=====  Saldo tidak cukup                       =====\n");
                                }
                                break;
                            case 4:
                                if (saldo >= 500000) {
                                    saldo -= 500000;
                                    printf("=====  Anda telah menarik Rp 500.000           =====\n");
                                    printf("=====  Saldo Anda: Rp %d\n", saldo);
                                } else {
                                    printf("=====  Saldo tidak cukup                       =====\n");
                                }
                                break;
                            default:
                                printf("=====  Opsi tidak valid                        =====\n");
                        }
                        break;
                    case 3:
                        printf("=====               Setor Tunai               =====\n");
                        printf("=====  Masukkan jumlah setor: ");
                        scanf("%d", &jumlah_setor);
                        saldo += jumlah_setor;
                        printf("=====  Saldo Anda: Rp %d\n", saldo);
                        break;
                    case 4:
                        printf("=====               Transfer                  =====\n");
                        printf("=====  Masukkan nomor rekening tujuan: ");
                        scanf("%d", &nomor_rekening_tujuan);
                        printf("=====  Masukkan jumlah transfer: ");
                        scanf("%d", &jumlah_tarik);

                        if (saldo >= jumlah_tarik) {
                            saldo -= jumlah_tarik;
                            printf("=====  Anda telah mentransfer Rp %d ke rekening %d\n", jumlah_tarik, nomor_rekening_tujuan);
                            printf("=====  Saldo Anda: Rp %d\n", saldo);
                        } else { 
                            printf("=====  Saldo tidak cukup\n");
                        }
                        break;
                    case 5:
                        printf("=====  Terima kasih telah menggunakan ATM!   =====\n");
                        return 0;
                }
            }
        } else {
            attempts++;
            if (attempts < 3) {
                printf("=====  PIN salah. Silakan coba lagi.           =====\n");
            } else {
                printf("=====  PIN salah 3 kali. Kartu Anda telah diblokir.\n");
                return 0;
            }
        }
    } else {
        		printf("=====       Nomor rekening tidak valid         =====\n");
    }

    return 0;
}
