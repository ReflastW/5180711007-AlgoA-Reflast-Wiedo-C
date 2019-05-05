#include<iostream>
#include<stdlib.h>

using namespace std;

main(){

char member;
float dis,bay;
int byr,jum,habar[20],jumbar[30],tot,tott=0;
string id,iden,nm,nambar[20],nama[10];


    nama[0]="Bayu";
    nama[1]="Irvan";
    nama[2]="Susiati";
    nama[3]="Diana";
    nama[4]="Roni";

cout<<"Ada Member? [Y/T] : ";cin>>member;
system("cls");
    if(member=='y'||member=='Y')
{
    cout<<"No identitas : ";cin>>iden;


    if(iden=="A001")
        {
            cout<<"No. identitas : "<<iden<<endl;
            cout<<"Nama          : "<<nama[0]<<endl;
        }
    else if(iden=="A002")
        {
            cout<<"No. identitas : "<<iden<<endl;
                cout<<"Nama          : "<<nama[1]<<endl;
        }
    else if(iden=="A003")
        {
            cout<<"No. identitas : "<<iden<<endl;
            cout<<"Nama          : "<<nama[2]<<endl;
        }
    else if(iden=="A007")
        {
            cout<<"No. identitas : "<<iden<<endl;
            cout<<"Nama          : "<<nama[3]<<endl;
        }
    else if(iden=="A008")
        {
            cout<<"No. identitas : "<<iden<<endl;
            cout<<"Nama          : "<<nama[4]<<endl;
        }

}

else if(member=='t'||member=='T')
{
    cout<<"Masukkan Nama : ";cin>>nama[0];
    cout<<"No Identitas  : ";cin>>iden;
    cout<<endl;
}

cout<<"Banyak Barang : ";cin>>jum;cout<<endl;

        for(int i=0;i<jum;i++)
{
    cout<<"Barang ke - "<<i+1<<endl;
    cout<<"Nama Barang   : ";cin>>nambar[i];
    cout<<"Jumlah barang : ";cin>>jumbar[i];
    cout<<"Harga Barang  : ";cin>>habar[i];
    cout<<endl;

    tot=jumbar[i]*habar[i];
    tott=tott+tot;

}
cout<<"Total Harga : "<<tott<<endl;

    if(member=='y'||member=='Y')
        {
            dis=5/(float)100;
            bay=tott*dis;
        cout<<"Diskon : "<<bay<<endl;
        cout<<"Total  :"<<tott-bay<<endl;
        cout<<"Jumlah dibayar : ";cin>>byr;
        cout<<"Kembali        : "<<byr-(tott-bay);

        }

else if(member=='t'||member=='T')
        {
        cout<<"Maaf, non-member tidak mendapat diskon "<<endl;
        cout<<"Jumlah dibayar : ";cin>>byr;
        cout<<"Kembali       : "<<byr-tott;
        }

}

