extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021d9458(void*, const void*);
extern "C" unsigned char data_10048880[];

extern "C" void* fn_021d9c44(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    fn_021d9458(storage, arg);
    *(const void**)((char*)storage + 12) = data_10048880;
    return storage;
}
