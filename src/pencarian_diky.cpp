void cariProduk(){
	if(headProduk==NULL){
		cout<<"\n[!] Data produk masih kosong. Tidak dapat melakukan pencarian."<<endl;
		return;
	}
	
	int cariId;
	cout<<"\nMasukan ID Produk yang dicari";
	cin>>cariId;
	
	Produk* current =headProduk;
	bool ditemukan=false;
	
	while(current!=NULL){
		if(current->id== cariId){
			cout<<"\n[+] Produk ditemukan!"<<endl;
			cout<<"ID\t\t:" << current->id <<endl;
			cout<<"Nama\t\t:" << current->nama<<endl;
			cout<<"harga\t\t: Rp."<< current->harga<<endl;
			cout<<"Stok\t\t:" << current->stok<<endl;
			ditemukan =true;
			break;
		}
		current=current->next;
	}
	if(!ditemukan){
		cout<<"\n[!] Produk dengan ID "<<cariId<<" tidak ditemukan."<<endl;
	}
	
}

void urutkanProduk(){
	if(headProduk == NULL){
		cout << "\n[!] Data produk masih kosong. Tidak dapat melakukan pengurutan." << endl;
		return;
	}
	if(headProduk->next == NULL){
		cout<<"\n[Info] Hanya ada 1 produk. Data tidak perlu diurutkan."<< endl;
		return;
	}
	
	int jumlahProduk =0;
	Produk* hitung =headProduk;
	while(hitung != NULL){
		jumlahProduk++;
		hitung = hitung->next;
	}
	Produk* current;
	
	for(int i=0; i<jumlahProduk - 1;i++){
		current=headProduk;
		for(int j=0; j < jumlahProduk - 1 - i;j++){
			if(current->harga > current->next->harga){
				swap(current->id, current->next->id);
				swap(current->nama, current->next->nama);
				swap(current->harga, current->next->harga);
				swap(current->stok, current->next->stok);
				
			}
			current = current->next;
		}
	}
	cout<<"\n[+] Produk berhasil diurutkan berdasarkan harga termurah!"<<endl;
	cout<<"[*]Silahkan pilih menu 'Tampilkan Semua Produk' untuk melihat hasilnya."<<endl;
	
}
