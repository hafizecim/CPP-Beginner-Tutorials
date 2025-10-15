// KLAVYE  DEN GÝRÝLEN BÝR SAYININ BASAMAK SAYISINI HESAPLAYAN METOD A E A
// ================== ÖRNEK 9: BASAMAK SAYISI HESAPLAMA ==================
#include <iostream>
using namespace std;


// Kullanýcýdan sayý alýr, basamak sayýsýný bulur ve ekrana yazdýrýr
void basamakSayisiMetotOrnek9() {
    int sayi;
    cout << "\nBir sayi giriniz: ";
    cin >> sayi;

    int basamak = 0;

    // Negatif sayýlarý pozitife çevir
    if (sayi < 0) sayi = -sayi;

    // 0 için özel durum
    if (sayi == 0) {
        basamak = 1;
    } else {
        while (sayi > 0) {
            sayi /= 10;
            basamak++;
        }
    }

    cout << "Basamak sayisi: " << basamak << endl;
}

int main() {
    char devam;

    do {
        basamakSayisiMetotOrnek9();  // metodu çaðýr

        cout << "\nTekrar denemek ister misiniz? (E/e: Evet, H/h: Hayir): ";
        cin >> devam;

    } while (devam == 'E' || devam == 'e');

    cout << "\nProgramdan cikiliyor...\n";
    return 0;
}r


/*
#include <iostream>
using namespace std;

int basmak_sayisi(int);

int main(){
	
	int sayi = 0;
	cout<<"Sayi : ";
	cin>>sayi;
	cout<<sayi<<" sayiisnin basmak sayisi : " << basamak_sayisi(sayi);
	
	return 0;
}

int basmak_sayisi(int sayi){
	int basamak = 0;
	while(sayi != 0){
		sayi = (sayi - sayi % 10) / 10;
		basamak++;
	}
	return basamak;
}

*/
