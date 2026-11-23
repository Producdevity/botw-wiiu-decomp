extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_028c5028(void*, const void*);
extern "C" unsigned char data_1015b130[];

extern "C" void* fn_028e3218(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(144);
        if (!storage)
            return storage;
    }
    fn_028c5028(storage, arg);
    *(const void**)((char*)storage + 12) = data_1015b130;
    return storage;
}
