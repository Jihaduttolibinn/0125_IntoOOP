
#include <iostream>
using namespace std;
class Mahasiswa {
public: // akses modifier 
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "Nama: " << nama << endl; // step 1
		cout << "Umur: " << umur << endl;
		cout << "Jurusan: " << jurusan << endl;
	}
};

class Matakuliah{
	private:
		string kodeMK;
		string namaMK;
		string sks;
	public :
		void input() {
			cout << "Kode MK: ";
			cin >> kodeMK;
			cout << "Nama MK: "; // step 1
			cin >> namaMK;
			cout << "SKS: ";
			cin >> sks;
		}

		void output() {

		}


};

