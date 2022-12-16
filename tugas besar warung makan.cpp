//Tubes Algoritma Pemrograman
//Nama Kelompok : 1. Ni Luh Angelina Andadari    (2205551131)
//                2. Made Dian Wijayanti         (2205551128)
#include <iostream>
using namespace std;


long pembiayaan (long harga, int jumlah){//fungsi pembiayaan
  long biaya=harga*jumlah;
  return biaya;
}

long dapat_diskon (long biaya){//fungsi dapat_diskon
  long diskon=0.05*biaya;
  return diskon;
}

int main()
{

  long harga, total, bayar, kembalian, pajak;
  int jumlah;
  char paket, ulang;
  do{
  cout <<"=========================================="<<endl;
  cout <<"||           Warung Makan               ||"<<endl;
  cout <<"||              Nikmat                  ||"<<endl;
  cout <<"=========================================="<<endl;
  cout <<"|| Jalan Batubulan No.59, Gianyar, Bali ||"<<endl;
  cout <<"=========================================="<<endl;


  cout << "-----------------------------------------------------------------\n";
  cout << "|Paket|      MAKANAN                | MINUMAN      | HARGA      |\n";
  cout << "-----------------------------------------------------------------\n";
  cout << "| A   | Ayam Goreng + Nasi + Sambal + Es Teh/Jeruk | RP. 15.000 |\n";
  cout << "| B   | Ikan Goreng + Nasi + Sambal + Es Teh/Jeruk | Rp. 20.000 |\n";
  cout << "| C   | Nasi Campur Komplit         + Es Campur    | RP. 26.500 |\n";
  cout << "| D   | Nasi Campur Biasa           + Es Campur    | Rp. 23.000 |\n";
  cout << "| E   | Soto + Nasi                 + Es Temulawak | RP. 14.000 |\n";
  cout << "-----------------------------------------------------------------\n";
  cout << "|         Diskon lima persen untuk setiap pembelian             |\n";
  cout << "-----------------------------------------------------------------\n";

  cout<<"Pilih Menu Paket [ A/B/C/D/E ]= "; cin>>paket;
  cout<<"Jumlah          = "; cin>>jumlah;

  switch(paket)
  {
    case 'A':
    case 'a'  :
     harga=15000;
    break;
    case 'B':
    case 'b'   :
     harga=20000;
    break;
    case 'C':
    case  'c'   :
     harga=26500;
    break;
    case 'D':
    case  'd'   :
     harga=23000;
    break;
    case 'E':
    case  'e'   :
     harga=14000;
    break;
  }



  long biaya =pembiayaan(harga,jumlah);
  long diskon=dapat_diskon(biaya);
  long pajak
  total=biaya-diskon;
  cout <<"=========================================="<<endl;
  cout <<"||           Warung Makan               ||"<<endl;
  cout <<"||              Nikmat                  ||"<<endl;
  cout <<"=========================================="<<endl;
  cout <<"|| Jalan Batubulan No.59, Gianyar, Bali ||"<<endl;
  cout <<"=========================================="<<endl;
  cout<<"RINCIAN PEMBAYARAN:      "<<endl;
  cout<<"Menu Paket       = "<<paket<<endl;
  cout<<"Jumlah           = "<<jumlah<<endl;
  cout<<"                 --------------"<<endl;
  cout<<"Biaya            = "<<biaya<<endl;
  pajak=biaya*0.05
  cout<<"pajak 5%         = "<<pajak<<endl;
  cout<<"Diskon 5%        = "<<diskon<<endl;
  cout<<"                 --------------"<<endl;
  cout<<"Total            = "<<total<<endl;
  cout<<"Bayar            = "; cin>>bayar;
  kembalian=bayar-total;
  cout<<"Uang Kembalian   = "<<kembalian<<endl;

    cout << endl;

    cout << "Ingin mengulang kembali? (y/t)"<< endl;
    cout << "Masukkan pilihan : ";
    cin >> ulang;
    cout << endl;

    } while ( ulang == 'y' );
    if (ulang == 't' ){
        cout << "Terimakasih!!";
    }


  return 0;
}
