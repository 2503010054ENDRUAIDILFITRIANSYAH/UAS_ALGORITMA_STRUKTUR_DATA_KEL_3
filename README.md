# 🛒 Sistem Kasir & Marketplace UMKM (CLI)

Program basis data berbasis teks (CLI) yang dirancang untuk mengelola katalog produk, antrean pembelian pelanggan, serta pencatatan log aktivitas secara kronologis. Proyek ini dibuat untuk memenuhi Tugas Besar / UAS Praktikum Struktur Data kelompok 3.

---

## 👥 Anggota Kelompok 3
* **Endru Aidil Fitriansyah ** - Lead Developer  file utama main & Modul Rekomendasi/Riwayat (Stack)
* **Fitriani** - Modul Manajemen Produk (Singly Linked List)
* **Diky** - Modul Pencarian & Pengurutan (Linear Search & Bubble Sort)
* **Maulana** - Modul Antrean Transaksi (Queue)

---

## 🛠️ Struktur Data & Algoritma yang Diimplementasikan

Aplikasi ini dibangun dengan mengintegrasikan 3 struktur data dinamis berbasis **Pointer & Linked List** serta 2 algoritma pencarian dan pengurutan utama:

1. **Singly Linked List (Katalog Produk):** Menyimpan data barang secara dinamis. Mendukung penambahan produk baru tanpa batas ukuran maksimal array.
2. **Queue / Antrean (Transaksi Kasir):** Menggunakan prinsip **FIFO (First In, First Out)** berbasis Linked List dengan pointer `frontQueue` dan `rearQueue`. Pelanggan yang pertama memesan akan diproses pembayarannya terlebih dahulu.
3. **Stack / Tumpukan (Riwayat Aktivitas):** Menggunakan prinsip **LIFO (Last In, First Out)** melalui pointer `topStack`. Setiap aksi pengguna direkam dan ditampilkan dari aktivitas yang paling baru dilakukan.
4. **Bubble Sort Algorithm (Pengurutan):** Diimplementasikan pada Linked List untuk mengurutkan katalog dari harga termurah ke termahal menggunakan teknik pertukaran nilai (*value swapping*).
5. **Linear Search Algorithm (Pencarian):** Melakukan penelusuran sekuensial dari `head` produk untuk menemukan informasi barang secara akurat berdasarkan ID uniknya.

---

## 🚀 Fitur Utama Aplikasi

### 👨‍💼 Fitur Admin & Pengelolaan Toko
* **Tambah Produk Baru (Menu 1):** Memasukkan data produk (ID, Nama, Harga, Stok) menggunakan metode *Insert at Head* pada linked list.
* **Kelola Stok Produk (Menu 9):** Mencari produk berdasarkan ID dan memperbarui jumlah pasokan (*update value*).

### 🛍️ Fitur Pembeli / Pelanggan
* **Tampilkan Semua Produk (Menu 2):** Menampilkan seluruh katalog barang yang tersedia di toko.
* **Cari Produk (Menu 3):** Mencari informasi produk tertentu menggunakan algoritma **Linear Search** berdasarkan ID.
* **Urutkan Produk Termurah (Menu 4):** Mengurutkan tampilan daftar produk dari harga paling murah ke mahal menggunakan algoritma **Bubble Sort** (*Value Swapping*).
* **Beli Produk / Masuk Antrean (Menu 5):** Memasukkan nama pelanggan dan ID barang yang ingin dibeli. Sistem akan otomatis memvalidasi ketersediaan stok, memotong stok awal produk, lalu memasukkannya ke dalam antrean kasir.
* **Rekomendasi Produk Termurah (Menu 7):** Menemukan dan menampilkan produk dengan harga paling murah secara otomatis menggunakan teknik *Pointer Traversal*.
* **Lihat Riwayat Aktivitas (Menu 8):** Menampilkan jejak log urutan menu yang diakses oleh pembeli.

### 💳 Fitur Kasir
* **Proses Transaksi Terdepan (Menu 6):** Melayani antrean pelanggan paling depan (*Dequeue*), mencetak Struk Belanja Digital (LUNAS), dan membebaskan alokasi memori pesanan tersebut.

---

## 💻 Cara Menjalankan Program (Kompilasi)

Pastikan kamu sudah menginstal *compiler* GCC/G++ (seperti MinGW) di perangkat laptopmu. 

1. Buka Terminal / Git Bash di folder utama proyek yang berisi file `main.cpp`.
2. Jalankan perintah kompilasi berikut:
   ```bash
   g++ main.cpp -o main
