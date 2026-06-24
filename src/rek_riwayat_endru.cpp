// --- FITUR 8: RIWAYAT AKTIVITAS (STACK - LIFO) ---
void pushRiwayat(string aksi) {
    Riwayat* baru = new Riwayat;
    baru->aksi = aksi;
    baru->next = topStack; // Menaruh node baru di puncak
    topStack = baru;
}

void tampilkanRiwayat() {
    if (topStack == NULL) {
        cout << "Riwayat aktivitas kosong." << endl;
        return;
    }
    
    Riwayat* temp = topStack;
    cout << "\n--- RIWAYAT AKTIVITAS ---" << endl;
    while (temp != NULL) {
        cout << "- " << temp->aksi << endl;
        temp = temp->next;
    }
}

// --- FITUR 7: REKOMENDASI PRODUK (TRAVERSAL) ---
void rekomendasiProduk() {
    // ngambil headproduk dari pipit
    if (headProduk == NULL) {
        cout << "Belum ada produk untuk direkomendasikan." << endl;
        return;
    }

    Produk* temp = headProduk;
    Produk* termurah = headProduk;

    // Logika Traversing Manual untuk mencari harga minimum
    while (temp != NULL) {
        if (temp->harga < termurah->harga) {
            termurah = temp;
        }
        temp = temp->next;
    }

    cout << "\n--- PRODUK TERMURAH ---" << endl;
    cout << "Nama: " << termurah->nama << " | Harga: Rp" << termurah->harga << endl;

    pushRiwayat("Melihat rekomendasi produk termurah");
}