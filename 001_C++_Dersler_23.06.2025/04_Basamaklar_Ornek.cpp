#include <iostream> // input output kütüphanesi
using namespace std;
int main(int argc, char** argv) 
{
    
    // Yöntem 1
    
    int sayi1 = 1234;
    birler_basamagi = sayi1 % 10; // 4
    onlar_basamagi  = ((sayi1 - birler_basamagi) / 10 ) % 10 // 3
    yuzler_basamagi = ((sayi1 - ((onlar_basamagi *10) +  birler_basamagi)) / 100 ) % 10 // 2
    binler_basamagi = ((sayi1 - ((yuzler_basmagi * 100 ) + (onlar_basamagi *10) +  birler_basamagi)) ) / 1000 ) // 1
    
    cout<<"Birler basamagi : "<< birler_basamagi<<endl;
	cout<<"Onlar_basamagi  : "<< onlar_basamagi <<endl;
	cout<<"Yuzler basamagi : "<< yuzler_basamagi<<endl;
	cout<<"Binler basamagi : "<< binler_basamagi<<endl;
    
    // Yöntem 2
    
    int sayi2 = 1234;
    int birler, onlar, yuzler, binler;
    birler = sayi % 10;
    cout<<"Birler basamagi : "<< birler<<endl;
    sayi = (sayi-birler) / 10;
    
    onlar = sayi % 10;
    cout<<"Onlar basamagi : "<< onlar<<endl;
    sayi = (sayi - onlar) /10;
    
    yuzler = sayi % 10;
    cout<<"Yuzler basamagi : "<< yuzler<<endl;
    sayi = (sayi - yuzler) /10;
    
    binler = sayi ;
    cout<<"Binler basamagi : "<< binler<<endl;
    
    
    // Yöntem 3
    
    int sayi3 = 1234;
    int birler3, onlar3, yuzler3, binler3;
    
    birler3 = sayi3 % 10;
    onlar3  = (sayi3 /10) % 10;
    yuzler3 = (sayi3 /100) % 10;
    binler3 = (sayi3 /1000);
    
    cout<<"Birler basamagi : "<< birler3<<endl;
    cout<<"Onlar basamagi  : "<< onlar3 <<endl;
    cout<<"Yuzler basamagi : "<< yuzler3<<endl;
    cout<<"Binler basamagi : "<< binler3<<endl;
    

    // Yöntem 4
 	
    int sayi4 = 1234;
    
    cout<<"Birler basamagi : "<< sayi4 % 10<<endl;
    cout<<"Onlar basamagi  : "<< (sayi4 % 100) / 10<<endl;
    cout<<"Yuzler basamagi : "<< (sayi4 / 100) % 10<<endl;
    cout<<"Binler basamagi : "<< (sayi4 / 1000)    <<endl;
    
    
    //Yöntem 5
    
    int sayi5;
    cout << "4 basamakli bir sayi giriniz : ";
    cin  >> sayi5; // character in
    cout << "Girilen sayi :" << sayi5;
    
    cout<<"Birler basamagi : "<< sayi5 % 10<<endl;
    cout<<"Onlar basamagi  : "<< (sayi5 % 100) / 10<<endl;
    cout<<"Yuzler basamagi : "<< (sayi5 / 100) % 10<<endl;
    cout<<"Binler basamagi : "<< (sayi5 / 1000)    <<endl;
    
    
    return 0;
    
}
