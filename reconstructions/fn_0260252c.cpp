extern "C" bool fn_02b33a1c(void*);
extern "C" bool fn_0378dacc(void*, void*);

struct Opaque_fn_0260252c {
    unsigned char padding_0[76];
    void* key;
    unsigned char padding_50[28];
    unsigned char member_6c[36];
    unsigned char member_90[28];
    int state;
    unsigned char padding_b0[28];
    bool ready;
};

extern "C" bool fn_0260252c(Opaque_fn_0260252c* object) {
    if (fn_02b33a1c(object->member_6c) && fn_0378dacc(object->member_90, object->key) && object->state == 2) {
        object->ready = true;
        return true;
    }
    return false;
}
