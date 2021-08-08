#include <iostream>

using namespace std;
/*****************************/
/*   copy right © by Dvl_noob*/
/****************************/


// nama fungsi
void author();
void menu();
void logo();
void perkalian(string warna,string net);
void penjumlahan(string warna,string net);
void pembagian(string warna,string net);
void pengurangan(string warna,string net);

//bagian main
int main(){
	int bor;
	string H="\033[0m";
	logo();
	menu();
	cout << "\033[31m\033[47mpilih: \033[0m";
	cin >> bor;
	if(bor == 1){
		perkalian("\033[31m",H);
	}else if(bor == 2){
		penjumlahan("\033[31m",H);
	}else if(bor == 3){
		pembagian("\033[31m",H);
	}else if(bor == 4){
		pengurangan("\033[31m",H);
	}
	else if(bor == 0){
		cout << "exit";
	}
}

//bagin fungsi :)

void menu(){
	cout << "\033[32m1.perkalin\n";
	cout << "2.penjumlahan\n";
	cout << "3.pembagian\n";
	cout << "4.pengurangan\n";
	cout << "0.exit\n";
}
void logo(){
	cout << "==============================================";
	cout << "\n\033[0m    \033[31m\033[47m     KALKULATOR BERBASIS LINUX       \033[0m\n";
	author();
	cout << "\n==============================================\n";
	
}

void perkalian(string warna,string net){
	while(true){
		float satu,dua,hasil;
		cout << "\nangka pertama: ";
		cin >> satu;
		cout << "\nangka ke dua: ";
		cin >> dua;
		hasil=satu*dua;
		cout << warna << "\nhasil: " << hasil << net;
		if(hasil == 0){
			break;
		}
	}
}

void penjumlahan(string warna,string net){
	while(true){
	float satu,dua,hasil;
	cout << "\nangka pertama: ";
	cin >> satu;
	cout << "\nangka ke dua: ";
	cin >> dua;
	hasil=satu+dua;
	cout << warna << "\nhasil: " << hasil << net;
	if(hasil == 0){
			break;
		}
	}
}

void pembagian(string warna,string net){
	while(true){
	float satu,dua,hasil;
	string x;
	cout << "\nangka pertama: ";
	cin >> satu;
	cout << "\nangka ke dua: ";
	cin >> dua;
	hasil=satu/dua;
	cout << warna << "\nhasil: " << hasil <<
 net;
    cout << "\nkeluar y/n: ";
    cin >> x;
	if(x == "y"){
		break;
	}
  }
}

void pengurangan(string warna,string net){
	while(true){
		float satu,dua,hasil;//ini hanya varibel
		cout << "\nangka pertama: ";
		cin >> satu; //input atau read
		cout << "\nangka ke dua: ";
		cin >> dua;
		hasil=satu-dua;
		cout << warna << "hasil: " << hasil << net;
		if(hasil==0){
			break;
		}
	}
}

void author(){
		cout << "\n  author   :      Devl_ Noob            \n";
		cout << "  github   :  https://github.com/yunanaexploit";}
		