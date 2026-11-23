namespace {

struct Object {
    char pad[104];
    float vector[3];
    char pad2[72];
    float result;
};

}

extern "C" float fn_03c6fcf0(const float* vector);

extern "C" void fn_028b26f8(Object* p, const float* vector) {
    p->vector[0] = vector[0];
    p->vector[1] = vector[1];
    p->vector[2] = vector[2];
    p->result = fn_03c6fcf0(vector);
}
