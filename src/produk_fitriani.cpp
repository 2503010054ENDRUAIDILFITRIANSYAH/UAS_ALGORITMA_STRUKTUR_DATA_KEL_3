void tambahProduk(){
	Produk* p=new Produk;
	cout<<"\n===== TAMBAH PRODUK BARU ====="<<endl;
	cout<<"Masukan ID Produk	: ";cin>>p->id;
	cout<<"Masukan Nama Produk	: ";cin>>ws;getline(cin, p->nama);
	cout<<"Masukan Harga		: ";cin>>p->harga;
	cout<<"Masukan Stok			: ";cin>>p->stok;
	p->next=NULL;
	
	
	if(headProduk==NULL){
		headProduk=p;
	}else{
		p->next=headProduk;
		headProduk=p;
	}
		
	cout<<"Produk '"<<p->nama<<"' berhasil ditambahkan!"<<endl;
	
}

void tampikanProduk(){
	if(headProduk == NULL){
		cout<<"Katalog produk masih kosong."<<endl;
		return;
	}
	
	Produk* temp=headProduk;
	cout<<"\n===== KATALOG PRODUK ====="<<endl;
	while(temp != NULL){
		cout<<"ID: "<<temp->id<<" | Nama: "<<temp->nama<<" | Harga: Rp."<<temp->harga<<" | Stok: "<<temp->stok<<endl;
		temp=temp->next;
	}
	
	PushRiwayat("Pembeli membuka katalog dan melihat semua produk");
}

void kelolaStok(){
	if(headProduk==NULL){
		cout<<"Katalog Produk masih Kosong."<<endl;
		return;
	}
	int idCari, stokBaru;
	cout<<"\n===== KELOLA STOK ====="<<endl;
	cout<<"Masukan ID Produk: ";cin>>idCari;
	
	Produk* temp = headProduk;
	while(temp!=NULL){
		if(temp->id==idCari){
			cout<<"Produk Ditemukan: "<<temp->nama<<"(Stok saat ini: "<<temp->stok<<")"<<endl;
			cout<<"Masukan Stok Baru: ";cin>>stokBaru;
			temp->stok=stokBaru;
			cout<<"Stok berhasil Diperbaharui!"<<endl;
			return;
		}
		temp = temp->next;
	}
	cout<<"Produk denga ID "<<idCari<<" tidak ditemukan."<<endl;
	
}
