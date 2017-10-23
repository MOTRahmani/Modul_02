#include <iostream>
using namespace std;

int main(){
	double luasrumah = 42;
	double lantaip = 193*1215;
	double luas1box = lantaip*8/1000000;
	
	cout << "Luas Rumah          : "<<luasrumah<<" m2"<<endl;
	cout << "Luas 1 Box Parket   : "<<luas1box<<" m2"<<endl;
	
	double jumlahboxp,biayap,biayapg,totalb;
	
	jumlahboxp = luasrumah/luas1box;
	cout << "Jumlah box parket   : "<<jumlahboxp<<endl;
	
	biayap = jumlahboxp * 500;
	cout << "Biaya parket(Rp)    : "<<biayap<<endl;
}
