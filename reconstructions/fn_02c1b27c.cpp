extern "C" bool fn_0378da88(void*);
extern "C" bool fn_0378dacc(void*, void*);
extern "C" void* fn_02c11ffc(void*, int);

struct Opaque_fn_02c1b27c {
    unsigned char padding_0[1204];
    unsigned char slot[1];
};

extern "C" bool fn_02c1b27c(Opaque_fn_02c1b27c* object, void* key) {
    if (fn_0378da88(object->slot)) {
        char* entry = (char*)fn_02c11ffc(key, 0);
        if (fn_0378dacc(object->slot, entry + 24)) {
            return true;
        }
    }
    return false;
}
