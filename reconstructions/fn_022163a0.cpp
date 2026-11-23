extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0222547c(void*, const void*);
extern "C" unsigned char data_10056b48[];

extern "C" void* fn_022163a0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    fn_0222547c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10056b48;
    return storage;
}
