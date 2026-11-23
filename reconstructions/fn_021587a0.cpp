extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_031123d0(void*, const void*);
extern "C" unsigned char data_10030668[];

extern "C" void* fn_021587a0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(16);
        if (!storage)
            return storage;
    }
    fn_031123d0(storage, arg);
    *(const void**)((char*)storage + 12) = data_10030668;
    return storage;
}
