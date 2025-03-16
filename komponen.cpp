#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Base class
class Komponen {
protected:
    string merk, nama;
public:
    Komponen(string merk = "", string nama = "") : merk(merk), nama(nama) {}
    virtual ~Komponen() {}
    string getMerk() const { return merk; }
    string getNama() const { return nama; }
    virtual void display() const {
        cout << merk << " " << nama;
    }
};