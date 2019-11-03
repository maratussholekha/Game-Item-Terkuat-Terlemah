#include <iostream>
#include <string>

using namespace std;

int main()
{
    string namaitem;
    int stat, pembanding;
    string item_sebelumnya, item_terhebat, item_terlemah; // variabelnya

    char option;
    cout << "SELAMAT DATANG DI GAME ITEM TERKUAT DAN TERLEMAH" << endl;
    cout << "================================================" << endl << endl;
    int i=0;

    do{
        cout << "Masukan nama item :"; cin >> namaitem; //untuk menginputkan nama item
        cout << "Masukan stat :"; cin >> stat; //untu menginputkan besarnya stat stat

        cout << "Item anda adalah :" << namaitem<<endl; //untuk menampikan item yang diinputkan
        cout << "stat :" <<stat<<endl; //untuk menampilkan sisa stat yang tersedia

        if(i==0)
            {
                cout <<  "Item sebelumnya : kosong"<<endl; //kondisi jika kita nelum menginputkan item
            }
        else if(i!=0)
            {
                cout << "Item sebelumnya :"<<item_sebelumnya<<endl; //kodsi jika kita sudah menginputkan item
            }

        if(i==0)
            {
                item_terhebat=namaitem; //kondisi untuk mensortir item yang terhebat
                pembanding=stat; //kondisi untuk membandingkan item sebelum dan sesudah
            }
        else if (i!=0)
        {
            if(stat>pembanding)
                {
                    item_terhebat=namaitem;
                }
        }
        cout <<"Item terhebat : "<<item_terhebat<<endl;//menampilkan item terhebat

        if(i==0)
            {
                item_terlemah=namaitem; //kondisi untuk mensortir item yang terlemah
            }
        else if(i!=0)
            {
                if(stat<pembanding)
                    {
                        item_terlemah=namaitem;
                    }
            }
        cout << "Item terlemah : "<<item_terlemah<<endl; //menampilkan item terhebat
        cout << "Input item lagi ? (y/n) : "<<endl; cin >>option; //menginputkan pertanyaan untuk dilooping lagi
        item_sebelumnya=namaitem;
        i++;
    }while(option=='y');

    return 0;
}
