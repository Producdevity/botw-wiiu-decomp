extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_028963d4(void*, const void*);
extern "C" unsigned char data_10150148[];

extern "C" void* fn_02892ea8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_028963d4(storage, arg);
    *(const void**)((char*)storage + 12) = data_10150148;
    return storage;
}
