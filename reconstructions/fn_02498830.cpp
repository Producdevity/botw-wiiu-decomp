extern "C" bool fn_02b33a1c(void*);
extern "C" int fn_0378db34(void*);
extern "C" bool fn_0378dacc(void*, void*);
extern "C" const float data_100c38d0;

struct Opaque_fn_02498830 {
    unsigned char padding_0[4];
    unsigned char key[140];
    float value;
    unsigned char padding_94[4];
    unsigned char member_98[36];
    unsigned char slot_bc[52];
    bool blocked;
};

extern "C" bool fn_02498830(Opaque_fn_02498830* object) {
    if (!object->blocked && fn_02b33a1c(object->member_98)) {
        if (fn_0378db34(object->key) && fn_0378dacc(object->slot_bc, object->key)) {
            object->value = data_100c38d0;
        }
        return true;
    }
    return false;
}
