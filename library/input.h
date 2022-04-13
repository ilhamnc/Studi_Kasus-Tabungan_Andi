using namespace std;

class Input{
	public :
		void menu() {
			cout<<"= UANG SAKU ANDI ="<<endl;
			cout<<"===================================="<<endl;
			cout<<"Uang Bulanan  : ";
			cin>>a;
			cout<<"Jumlah Bulan  : ";
			cin>>b;
      
			tulis.open("../dummy/out_input.txt");
			tulis<<a<<endl;
			tulis<<b;
		}
	
	private :
		ofstream tulis;
		int a, b ;
};
