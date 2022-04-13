using namespace std;

class Proses{
  public :
    void getData(){
      input.open("../dummy/out_input.txt");
      int data[2];
      for(int i = 1; i <= 2; i++) {
        input>>data[i];
      }
      input.close();
      
      jumlah_bulan = data[1];
      uang_bulan = data[2];

      for(int i = 1; i <= jumlah_bulan; i++) {
        cout<<"Pengeluaran Bulan "<<i<<" : ";
        cin>>out[i];
      }

      for(int i = 1; i <= jumlah_bulan; i++) {
        save[i] = uang_bulan - out[i];
      }
      
      	for(int i = 1; i <= jumlah_bulan; i++) {
      		total_out = total_out + out[i];
    	}
    	for(int i = 1; i <= jumlah_bulan; i++) {
      		total_save = total_save + save[i];
    	}
    }
    

  	void hasil() {
    	file.open("../dummy/out_proses.txt");
    	file<<total_out<<endl;
    	file<<total_save<<endl;
    	
    	for(int i = 1; i < jumlah_bulan; i++) {
      		file<<out[i]<<endl;
    	}
    	file<<out[jumlah_bulan];
  	}
  
  private :
  	ifstream input;
    ofstream file;
    int jumlah_bulan, uang_bulan;
    int out[20], save[20];
    int total_out, total_save; 
};
