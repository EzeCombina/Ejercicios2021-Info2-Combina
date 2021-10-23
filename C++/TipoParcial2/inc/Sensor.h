#include <iostream>

using namespace std;

class sensor {
    private:
        int a;
        int v;
    public:
        sensor(int a_, int v_);
        float get_aceleracion();
        float get_velocidad();
};

class campo : public sensor {
    private:
        float c;
    public:
        campo(int a_, int v_, float c_) : sensor(a_, v_) {
            this->c = c_;
        }
        float get_campo();
};