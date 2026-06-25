

void beliProduk() {
    if (headProduk == NULL) {
        cout << "\n[!] Belum ada produk yang bisa dibeli." << endl;
        return;
    }

    int idBeli, jumlah;
    string namaPembeli;

    cout << "\n=== TAMBAH KE ANTREAN PEMBELIAN ===" << endl;
    cout << "Masukkan Nama Pembeli        : "; cin >> ws; getline(cin, namaPembeli);
    cout << "Masukkan ID Produk yang dibeli: "; cin >> idBeli;

    // Pencarian produk menggunakan Linked List
    Produk* tempP = headProduk;
    while (tempP != NULL && tempP->id != idBeli) {
        tempP = tempP->next;
    }

    if (tempP == NULL) {
        cout << "[!] Produk tidak ditemukan!" << endl;
        return;
    }

    cout << "Produk: " << tempP->nama << " | Harga: Rp" << tempP->harga << " | Stok Tersedia: " << tempP->stok << endl;
    cout << "Masukkan Jumlah Beli         : "; cin >> jumlah;

    if (jumlah > tempP->stok) {
        cout << "[!] Maaf, stok tidak mencukupi untuk pembelian ini." << endl;
        return;
    }


    tempP->stok -= jumlah;


    Antrean* pesananBaru = new Antrean;
    pesananBaru->idProduk = tempP->id;
    pesananBaru->namaProduk = tempP->nama;
    pesananBaru->namaPembeli = namaPembeli; 
    pesananBaru->jumlahBeli = jumlah;
    pesananBaru->totalHarga = tempP->harga * jumlah;
    pesananBaru->next = NULL;

    if (rearQueue == NULL) { 
        frontQueue = rearQueue = pesananBaru;
    } else {
        rearQueue->next = pesananBaru;
        rearQueue = pesananBaru;
    }

    cout << "[+] Pesanan atas nama '" << namaPembeli << "' berhasil masuk ke antrean!" << endl;
    
    pushRiwayat("Pembeli (" + namaPembeli + ") memasukkan produk '" + tempP->nama + "' ke dalam keranjang");
}

void prosesTransaksi() {
    if (frontQueue == NULL) {
        cout << "\n[!] Tidak ada antrean pesanan saat ini." << endl;
        return;
    }

    // Mengambil antrean paling depan 
    Antrean* pesananDiproses = frontQueue;
    frontQueue = frontQueue->next;
    
    if (frontQueue == NULL) {
        rearQueue = NULL; 
    }

    // Cetak Struk Belanja
    cout << "\n=========================================" << endl;
    cout << "          STRUK TRANSAKSI (LUNAS)        " << endl;
    cout << "=========================================" << endl;
    cout << "Nama Pembeli : " << pesananDiproses->namaPembeli << endl;
    cout << "Barang       : " << pesananDiproses->namaProduk << endl;
    cout << "Jumlah       : " << pesananDiproses->jumlahBeli << endl;
    cout << "Total Bayar  : Rp" << pesananDiproses->totalHarga << endl;
    cout << "=========================================" << endl;

    
    pushRiwayat("Kasir memproses pembayaran (" + pesananDiproses->namaPembeli + ") untuk produk " + pesananDiproses->namaProduk);
    

    delete pesananDiproses;
}