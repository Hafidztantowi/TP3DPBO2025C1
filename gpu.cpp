#include "komponen.cpp"

class Gpu : public Komponen {
    private:
        int vramGB;
    public:
        Gpu(int vram = 0, string merk = "", string nama = "")
            : Komponen(merk, nama), vramGB(vram) {}
        void display() const override {
            cout << "GPU: " << merk << " " << nama << " (" << vramGB << " GB VRAM)" << endl;
        }
    };