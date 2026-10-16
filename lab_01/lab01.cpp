#include <iostream>
#include <string>
using namespace std;

class Protein{
    public:
        void set_id(string);
        void set_name(string);
        void set_allilouxia(string);
        
        void get_id(string&);
        void get_name(string&);
        void get_allilouxia(string&);
        void describe();

    private:
        string id, name, allilouxia;
        
};

class Gene {
    public:
        void set_id(string);
        void set_name(string);
        void set_start(string);
        void set_end(string);
        void set_chrom(string);
        void set_strand(char);

        void get_id(string&);
        void get_name(string&);
        void get_start(string&);
        void set_end(string&);
        void set_chrom(string&);
        void get_strand(char&);

        void describe();
    private: 
        string id, name, chrom, start, end;
        char strand;
};

int main() {
    Protein p1;
    p1.set_id("ENSP1234");
    p1.set_name("PTEN");
    p1.set_allilouxia("MNAAATARATLL");
    p1.describe();

    Gene g1;
    g1.set_id("ENSG1234");
    g1.set_name("BRCA1");
    g1.set_chrom("chr1");
    g1.set_start("43044295");
    g1.set_end("43170245");
    g1.set_strand('+');
    g1.describe();

    return 0; 
    
}

void Protein::set_id(string i_d) {
    id=i_d;
}

void Protein::set_name(string n) {
    name=n;
}

void Protein::set_allilouxia(string al) {
    allilouxia=al;
}

void Protein::get_id(string& i_d) {
    i_d=id;
}

void Protein::get_name(string& n) {
    n=name;
}

void Protein::get_allilouxia(string& al) {
    al=allilouxia;
}

void Protein::describe() {
    cout << "protein " << name << "  " << allilouxia << "\n";
    return;
}


void Gene::set_id(string i_d) {
    id=i_d;
    return;
}

void Gene::set_name(string n) {
    name=n;
    return;
}

void Gene::set_chrom(string ch) {
    chrom=ch;
    return;
}

void Gene::set_start(string s) {
    start=s;
    return;
}

void Gene::set_end(string e) {
    end=e;
    return;
}

void Gene::set_strand(char str) {
    strand=str;
    return;
}

void Gene::get_id(string& i_d) {
    i_d=id;
}

void Gene::get_name(string& n) {
    n=name;
}
void Gene::get_start(string& s) {
    s=start;
}
void Gene::set_end(string& e) {
    e=end;
}
void Gene::get_strand(char& str) {
    str=strand;
}

void Gene::describe() {
    cout << "Gene " << name << " (" << chrom << ":" << start << "-" << end << ", " << strand << ").\n";
}

