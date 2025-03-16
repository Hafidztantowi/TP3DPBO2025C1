class Komponen:
    def __init__(self, merk="", nama=""):
        self.merk = merk
        self.nama = nama
    
    def get_merk(self):
        return self.merk
    
    def get_nama(self):
        return self.nama
    
    def display(self):
        print(f"{self.merk} {self.nama}")

class Cpu(Komponen):
    def __init__(self, core=0, speed=0.0, merk="", nama=""):
        super().__init__(merk, nama)
        self.jumlah_core = core
        self.kecepatan_ghz = speed
    
    def display(self):
        print(f"CPU: {self.merk} {self.nama} ({self.jumlah_core} Core, {self.kecepatan_ghz} GHz)")

class Ram(Komponen):
    def __init__(self, kapasitas=0, ddr="", merk="", nama=""):
        super().__init__(merk, nama)
        self.kapasitas_gb = kapasitas
        self.ddr = ddr
    
    def display(self):
        print(f"RAM: {self.merk} {self.nama} ({self.kapasitas_gb} GB, {self.ddr})")

class Harddrive(Komponen):
    def __init__(self, kapasitas=0, tipe="", merk="", nama=""):
        super().__init__(merk, nama)
        self.kapasitas_gb = kapasitas
        self.tipe_drive = tipe
    
    def display(self):
        print(f"Hard Drive: {self.tipe_drive} {self.merk} {self.nama} ({self.kapasitas_gb} GB)")

class Gpu(Komponen):
    def __init__(self, vram=0, merk="", nama=""):
        super().__init__(merk, nama)
        self.vram_gb = vram
    
    def display(self):
        print(f"GPU: {self.merk} {self.nama} ({self.vram_gb} GB VRAM)")

class Komputer:
    def __init__(self, nama, cpu, ram_list, harddrive, gpu_list):
        self.nama = nama
        self.cpu = cpu
        self.ram_list = ram_list
        self.harddrive = harddrive
        self.gpu_list = gpu_list
    
    def display(self):
        print(f"Komputer: {self.nama}")
        self.cpu.display()
        for ram in self.ram_list:
            ram.display()
        self.harddrive.display()
        for gpu in self.gpu_list:
            gpu.display()

if __name__ == "__main__":
    pc = Komputer(
        "Gaming Rig",
        Cpu(8, 3.6, "Intel", "Core i9"),
        [
            Ram(16, "DDR5", "Corsair", "Vengeance"),
            Ram(16, "DDR5", "G.Skill", "Trident Z")
        ],
        Harddrive(2000, "SSD", "Samsung", "Evo"),
        [
            Gpu(8, "NVIDIA", "RTX 3070"),
            Gpu(16, "AMD", "RX 6800 XT")
        ]
    )
    pc.display()
