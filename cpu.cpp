#include "komponen.cpp"

class Cpu : public Komponen {
    private:
        int jumlahCore;
        float kecepatanGHz;
    public:
        Cpu(int core = 0, float speed = 0.0, string merk = "", string nama = "")
            : Komponen(merk, nama), jumlahCore(core), kecepatanGHz(speed) {}
        void display() const override {
            cout << "CPU: " << merk << " " << nama << " (" << jumlahCore << " Core, " << kecepatanGHz << " GHz)" << endl;
        }
    };
    
    