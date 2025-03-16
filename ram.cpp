#include "komponen.cpp"

class Ram : public Komponen {
    private:
        int kapasitasGB;
        string ddr;
    public:
        Ram(int kapasitas = 0, string ddr = "", string merk = "", string nama = "")
            : Komponen(merk, nama), kapasitasGB(kapasitas), ddr(ddr) {}
        void display() const override {
            cout << "RAM: " << merk << " " << nama << " (" << kapasitasGB << " GB, " << ddr << ")" << endl;
        }
    };
    
    