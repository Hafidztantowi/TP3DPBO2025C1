#include "komponen.cpp"

class Harddrive : public Komponen {
    private:
        int kapasitasGB;
        string tipeDrive;
    public:
        Harddrive(int kapasitas = 0, string tipe = "", string merk = "", string nama = "")
            : Komponen(merk, nama), kapasitasGB(kapasitas), tipeDrive(tipe) {}
        void display() const override {
            cout << "Hard Drive: " << tipeDrive << " " << merk << " " << nama << " (" << kapasitasGB << " GB)" << endl;
        }
    };
    
    