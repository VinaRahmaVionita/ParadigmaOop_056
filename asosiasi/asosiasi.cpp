#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
	string nama;                            
	vector<dokter*> daftar_dokter;
	pasien(string pNama) :nama(pNama) {             //konstruktor 
		cout << "Pasien \"" << nama << "\" ada\n";
	}
	~pasien() {                                     //destruktor
		cout << "Pasien \"" << nama << "\" tidak ada\n";
	}
	void tambahDokter(dokter*);
	void cetakDokter();
};
class dokter {
public:
	string nama;
	vector<pasien*> daftar_pasien;

	dokter(string pNama) :nama(pNama) {               //konstruktor
		cout << "Dokter \"" << nama << "\" ada\n";
	}
	~dokter() {                                           //destruktor
		cout << "Dokter \"" << nama << "\" tidak ada\n";
	}

	void tambahPasien(pasien*);
	void cetakPasien();
};
void pasien::tambahDokter(dokter* pDokter) {
	daftar_dokter.push_back(pDokter);
}
void pasien::cetakDokter() {
	cout << "Daftar Dokter yang menangani pasien \"" << this->nama << "\":\n";
	for (auto& a : daftar_dokter) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
void dokter::cetakPasien() {
	cout << "Daftar Pasien dari dokter \"" << this->nama << "\":\n";
	for (auto& a : daftar_pasien) {
		cout << a->nama << "\n";
	}
	cout << endl;
	for (auto& a : daftar_pasien) {
		cout << a->nama << "\n";
	}
	cout << endl;
}


