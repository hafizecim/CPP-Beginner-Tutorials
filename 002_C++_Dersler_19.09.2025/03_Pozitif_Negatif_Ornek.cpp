#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
   int sayi;
   cout<<"Bir Sayi Giriniz :";
   cin>>sayi;
  
    if (sayi == 0)
    {
        cout << sayi << " sayisi noturdur";
    }
    else
    {
        if (sayi > 0)
        {
            cout << sayi << " sayisi pozitiftir";
        }
        else
        {
            cout << sayi << " sayisi negatiftir : ";
        }
    }
    return 0;
}
