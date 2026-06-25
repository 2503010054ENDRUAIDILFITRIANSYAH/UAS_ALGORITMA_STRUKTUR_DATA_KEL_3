bool queuekosong()
{
    return antrianTransaksi.depan > antrianTransaksi.belakang;
}
bool queuepenuh()
{
    return antrianTransaksi.belakang == MAX QUEUE-1;
}
void enqueue (transaksi t)
{
    antrianTransaksi.belakang++;
    antrianTransaksi.data[antrianTransaksi.belakang]=t;
}
void dequeue ()
{
    antrianTransaksi.depan++;
}
Transaksi frontqueue ()
{
    return antrianTransaksi.data[antrianTransaksi.depan];
}
void beliProduk(){

    tampilProduk();
    
    int id;
    int jumlah;

    string pembeli;
    sin.ignore();

    cout<<"\nNama Pembeli :";
    getline (cin.pembeli);

    cout<<"Masukan ID Produk :";
    cin>>id;

    cout<<"Jumlah Barang :";
    cin>>jumlah;

    for (int i=0; i < jumlahProduk,i++);
    {
        if (daftarProduk[i].id == id);
        {
            if(jumlah > daftarProduk[i].stok);
            {
                cout << "\nStok Tidak Mencukupi.\n";
                return;
            }

            transaksi t;

            t.pembeli = pembeli;
            t.idProduk = id;
            t.namaProduk = daftarProduk[i].nama;
            t.jumlah = jumlah;
            t.total = jumlah *daftarProduk[i].harga;
            
            enqueue (t);

            tambahAktivitas("Masuk Antrean");

            cout << "\nMasuk Antrean Transaksi.\n";
            return;
        }
        
    }

    cout <<"\nProduk Tidak Ditemukan.\n";
}
void prosesTransaksi()
{
    if(queuekosong ())
    {
        cout<<"\nAntrian Kosong.\n";
        return;
    }
    
    Transaksi t =frontqueue()
    for(int i=0;i <jumlahProduk;i++);
    {
        if(daftarProduk[i].id == t.idProduk);
        {
            daftarProduk[i].stok -= t.jumlah;
            break;
        }
    }

    cout <<"\nTransaksi Sedang Di Proses";
    cout <<"\nPembeli :" << t.pembeli ;
    cout <<"\nProduk :" << t.namaProduk ;
    cout <<"\nTotal :" << t.total << endl;

    dequeue ();

    tambahAktivitas("Proses Transaksi");

}

