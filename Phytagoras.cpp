#include <iostream>
#include <cmath>

int main(){
        int P;
        double Alas, Tegak, Miring;
        std::cout << "Mawu menghitung apah?" << '\n';
        std::cout << "1. Sisi Alas" << '\n';
        std::cout << "2. Sisi Tegak" << '\n';
        std::cout << "3. Sisi Miring" << '\n';

        std::cout << "Masukan plihan km: ";
        std::cin >> P;
          if (P == 1){
                std::cout << "Masukkan Panjang Sisi Tegak: " ;
                std::cin >> Tegak;

                std::cout << "Masukkan Panjang Sisi Miring: ";
                std::cin >> Miring;

                Alas = sqrt(pow(Miring, 2) - pow(Tegak,2));
                std::cout << "Panjang Sisi Alas Segitigamu Sebesar: " << Alas ;
                }

          if (P == 2){
                std::cout << "Masukkan Panjang Sisi Alas: " ;
                std::cin >> Alas;

                std::cout << "Masukkan Panjang Sisi Miring: ";
                std::cin >> Miring;

                Tegak = sqrt(pow(Miring, 2) - pow(Alas,2));
                std::cout << "Panjang Sisi Tegak Segitigamu Sebesar: " << Tegak ;
                }

          if (P == 3){
                std::cout << "Masukkan Panjang Sisi Alas: ";
                std::cin >> Alas;

                std::cout << "Masukkan Panjang Sisi Tegak: ";
                std::cin >> Tegak;

                Alas = sqrt(pow(Alas, 2) + pow(Tegak,2));
                std::cout << "Panjang Sisi Miring Segitigamu Sebesar: " << Alas ;
                }

return 0;

}