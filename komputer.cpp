#include "cpu.cpp"
#include "ram.cpp"
#include "harddrive.cpp"
#include "gpu.cpp"

class Komputer {
    private:
        string nama;
        Cpu cpu;
        vector<Ram> ramList;
        Harddrive harddrive;
        vector<Gpu> gpuList;
    public:
        Komputer(string nama, Cpu cpu, vector<Ram> ramList, Harddrive harddrive, vector<Gpu> gpuList)
            : nama(nama), cpu(cpu), ramList(ramList), harddrive(harddrive), gpuList(gpuList) {}
        
        void display() const {
            cout << "Komputer: " << nama << endl;
            cpu.display();
            for (const auto &ram : ramList) ram.display();
            harddrive.display();
            for (const auto &gpu : gpuList) gpu.display();
        }
    };
    