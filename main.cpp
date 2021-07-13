/*muhammad iqbal awaluda
*20.if 02
* 20.11.3418
* gak selesai buk,mumet,masih nub:(,stelah ngikutin yg di jurnal,saya coba ngerjain fungsi malah gk selesai
*/
#include <iostream>
using namespace std;

int main()
{
	string nama[100];
	string mk[100];
	int jmlmk;
	char nilaihuruf[100];
	int nilai;
	int sks[100];
	int jml;
	int jumlahnilai, jumlahsks;
	float nr[100];

	cout << "Jumlah mahasiswa :";
	cin >> jml;

	for (int i = 1; i <= jml; i++)
	{
		cout << "Nama Mahasiswa ke " << i + 0 << ':';
		cin >> nama[i];
		cout << "Jumlah matakuliah yang diambil :";
		cin >> jmlmk;
		if (jmlmk < 2)
		{
			cout << "Jumlah matakuliah kurang dari 2\n";
			return 0;
		}
		else
		{
			for (i = 0; i < jmlmk; i++)
			{
				cout << "matakuliah ke " << i + 1 << " \n";
				cout << "Matakuliah yang diambil :";
				cin >> mk[i];
				cout << "Nilai :";
				cin >> nilaihuruf[i];
				cout << "Jumlah SKS :";
				cin >> sks[i];
			}
			if (nilaihuruf[i] == 'A')
			{
				nilai = 4 * sks[i];
			}
			else if (nilaihuruf[i] == 'B') {
				nilai = 3 * sks[i];
			}
			else if (nilaihuruf[i] == 'C') {
				nilai = 2 * sks[i];
			}
			else if (nilaihuruf[i] == 'D') {
				nilai = 1 * sks[i];
			}
			else if (nilaihuruf[i] == 'E') {
				nilai = 0 * sks[i];
			}
			/*else {
				cout << "Input salah!\n";
				return 0;
				jumlahnilai = jumlahnilai + nilai;
				jumlahsks = jumlahsks + sks[i];
			}
			/*if (jumlahsks > 100) {
				cout << "Jumlah SKS semester lebih dari 100\n";
				return 0;
			}
			else {
				jumlahsks = jumlahsks;
				nr[i] = jumlahnilai / jumlahsks;
			}*/
		}
		cout << "Nama Mahasiswa ke " << i + 0 << ':';
		cin >> nama[i];
		cout << "Jumlah matakuliah yang diambil :";
		cin >> jmlmk;
		if (jmlmk < 2)
		{
			cout << "Jumlah matakuliah kurang dari 2\n";
			return 0;
		}
		else
		{
			for (i = 0; i < jmlmk; i++)
			{
				cout << "matakuliah ke " << i + 1 << " \n";
				cout << "Matakuliah yang diambil :";
				cin >> mk[i];
				cout << "Nilai :";
				cin >> nilaihuruf[i];
				cout << "Jumlah SKS :";
				cin >> sks[i];
			}
			if (nilaihuruf[i] == 'A')
			{
				nilai = 4 * sks[i];
			}
			else if (nilaihuruf[i] == 'B') {
				nilai = 3 * sks[i];
			}
			else if (nilaihuruf[i] == 'C') {
				nilai = 2 * sks[i];
			}
			else if (nilaihuruf[i] == 'D') {
				nilai = 1 * sks[i];
			}
			else if (nilaihuruf[i] == 'E') {
				nilai = 0 * sks[i];
			}
			/*else {
				cout << "Input salah!\n";
				return 0;
				jumlahnilai = jumlahnilai + nilai;
				jumlahsks = jumlahsks + sks[i];
			}
			/*if (jumlahsks > 100) {
				cout << "Jumlah SKS semester lebih dari 100\n";
				return 0;
			}
			else {
				jumlahsks = jumlahsks;
				nr[i] = jumlahnilai / jumlahsks;
			}*/
		}
	}

	for (int i = 0; i <= jml; i++)
	{
		cout << "tampilakan data :"<<endl;
		cout << "Nama :" << nama[i] << endl;
		for (int i = 1; i <= jmlmk; i++)
		{
			cout << "\nnilai matakuliah " << mk[i] << "adalah\n" << nilaihuruf[i];
		}
	}
	system("pause");
	return 0;
}