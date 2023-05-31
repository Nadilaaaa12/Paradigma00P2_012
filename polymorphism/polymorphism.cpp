#include <iostream>
using namespace std;

class seseorang {
public:
	virtual void pesan() = 0;
	//virtual void pesan() {
		//cout << "Pesan dari seseorang" << endl;
	//}
	//virtual void cetak() = 0;
	virtual void cetak() {

	}
};

class joko : public seseorang {
public:
	void pesan() {
		cout << "Pesan dari Joko" << endl;
	}
	void cetak() {
		cout << "Tulisan Joko" << endl;
	}
};

class lia : public seseorang {
	void pesan() {
		cout << "Pesan dari Lia" << endl;
	}


};

int main() {
	seseorang* orang;
	joko a;
	lia b;

	orang = &a;
	orang->pesan();
	orang = &b;
	orang->pesan();
	//a.seseorang::pesan();	//Memanggil method yang berada di class orang tua
	//b.seseorang::pesan();
}