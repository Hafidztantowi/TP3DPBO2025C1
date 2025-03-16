#include "komputer.cpp"

int main() {
    Komputer pc("Gaming Rig", Cpu(8, 3.6, "Intel", "Core i9"),
                {Ram(16, "DDR5", "Corsair", "Vengeance"), Ram(16, "DDR5", "G.Skill", "Trident Z")},
                Harddrive(2000, "SSD", "Samsung", "Evo"),
                {Gpu(8, "NVIDIA", "RTX 3070"), Gpu(16, "AMD", "RX 6800 XT")});
    
    pc.display();
    return 0;
}
