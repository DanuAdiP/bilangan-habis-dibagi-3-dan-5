#include<iostream>
using namespace std;

int main()
{
	int bil;
	cout<<"Nama  = Danu Adiputra"<<endl;
	cout<<"NIM   = 311810929"<<endl;
	cout<<"Kelas = 18.B.2"<<endl<<endl;
	cout<<"PROGRAM MENGETAHUI BILANGAN HABIS DIBAGI 3 DAN 5"<<endl<<endl;
	cout<<"Masukkan Angka = ";cin>>bil;
	cout<<bil;
	if(bil%3==0)
	cout<<" adalah bilangan habis dibagi 3";
	else if(bil%5==0)
	cout<<" adalah bilangan habis dibagi 5";
	else if(bil%3!=0||bil%5!=0)
	cout<<" bukan termasuk bilangan yang habis dibagi keduanya";
	
}
