#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
   int sayi;
   cout<<"Bir Sayi Giriniz :";
   cin>>sayi;
  
   if(sayi % 2 == 0 ){
       cout<<sayi<<" sayisi cifttir";
    }
    else{
       cout<<sayi<<" sayisi tektir : ";
   }
    
    return 0;
}
