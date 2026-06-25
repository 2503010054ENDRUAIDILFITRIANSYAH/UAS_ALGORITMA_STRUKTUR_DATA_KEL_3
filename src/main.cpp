#include <iostream>
#include <string>

using namespace std;

// 1. DEFINISI STRUKTUR DATA 

// Struktur data utama untuk Produk (Linked List)
struct Produk {
    int id;
    string nama;
    int harga;
    int stok;
    Produk* next;
};

// Struktur data untuk Antrean Transaksi Pembelian (Queue)
struct Antrean {
    int idProduk;
    string namaProduk;
    string namaPembeli;
    int jumlahBeli;
    int totalHarga;
    Antrean* next;
};

// Struktur data untuk Riwayat Aktivitas Pengguna (Stack)
struct Riwayat {
    string aksi;
    Riwayat* next;
};

// 2. DEKLARASI POINTER GLOBAL
// Pointer ini akan digunakan bersama oleh semua file berkode anggota
Produk* headProduk = NULL;   // Kepala Linked List Produk
Antrean* frontQueue = NULL;  // Depan Antrean (untuk ambil/proses)
Antrean* rearQueue = NULL;   // Belakang Antrean (untuk tambah beli)
Riwayat* topStack = NULL;    // Puncak Tumpukan Riwayat

void pushRiwayat(string aksi);

// 3. INTEGRASI BERKAS KODE ANGGOTA KELOMPOK
#include "produk_fitriani.cpp"
#include "pencarian_diky.cpp"
#include "transaksi_maulana.cpp"
#include "rek_riwayat_endru.cpp"


// 4. MAIN MENU UTAMA SYSTEM
int main() {
    int pilihan;

    do {
        cout << "\n=========================================" << endl;
        cout << "       SISTEM MARKETPLACE UMKM           " << endl;
        cout << "=========================================" << endl;
        cout << " 1. Tambah Produk           " << endl;
        cout << " 2. Tampilkan Semua Produk  " << endl;
        cout << " 3. Cari Produk      " << endl;
        cout << " 4. Urutkan Produk   " << endl;
        cout << " 5. Beli Produk    " << endl;
        cout << " 6. Proses Transaksi  " << endl;
        cout << " 7. Rekomendasi Termurah    " << endl;
        cout << " 8. Riwayat Aktivitas       " << endl;
        cout << " 9. Pengelolaan Stok        " << endl;
        cout << " 0. Keluar Aplikasi" << endl;
        cout << "=========================================" << endl;
        cout << "Pilih Menu (0-9): ";
        cin >> pilihan;
        cout << "=========================================" << endl;

        switch (pilihan) {
            case 1:
                tambahProduk(); // Fungsi di dalam produk_fitri.cpp
                break;
            case 2:
                tampilkanProduk(); // Fungsi di dalam produk_fitri.cpp
                break;
            case 3:
                cariProduk(); // Fungsi di dalam cari_diky.cpp
                break;
            case 4:
                urutkanProduk(); // Fungsi di dalam cari_diky.cpp
                break;
            case 5:
                beliProduk(); // Fungsi di dalam trans_maul.cpp
                break;
            case 6:
                prosesTransaksi(); // Fungsi di dalam trans_maul.cpp
                break;
            case 7:
                rekomendasiProduk(); // Fungsi di dalam rek_riwayat_idil.cpp
                break;
            case 8:
                tampilkanRiwayat(); // Fungsi di dalam rek_riwayat_idil.cpp
                break;
            case 9:
                kelolaStok(); // Fungsi di dalam produk_fitri.cpp
                break;
            case 0:
                cout << "Keluar dari sistem. Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan ulangi." << endl;
                break;
        }
    } while (pilihan != 0);

    return 0;
}