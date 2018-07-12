#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int tinggi;
	
	cout << "Masukan Tinggi Badan Anda = " ;
	cin >> tinggi;
	
	
	if(tinggi >= 165){
		cout << "\nSelamat Anda Lulus, Karena Anda Tinggi";
	}else {
		cout << "\nMaaf Anda Tidak Lulus, Makannya Jadi Orang Jangan Pendek - Pendek!!!";
	}
		
	
	getch();
		
}
