#ifndef ANAK_H
#define ANAK_H

class anak {
public:
	string nama;
	anak(string pNama) :nama(pNama) {         //konstruktor
		cout << "Anak \"" << nama << "\" asa\n";
	}
	~anak() {                                 //destruktor 
		cout << "Anak \"" << nama << "\" tidak ada\n";
	}
};
#endif