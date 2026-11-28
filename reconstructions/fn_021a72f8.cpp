extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021aab18(void*, const void*);
extern "C" void fn_02b614e0(void *);
extern "C" unsigned char data_1003e83c[];

extern "C" void* fn_021a72f8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    fn_021aab18(storage, arg);
    *(const void**)((char*)storage + 12) = data_1003e83c;
    fn_02b614e0((char*)storage + 40);
    return storage;
}
