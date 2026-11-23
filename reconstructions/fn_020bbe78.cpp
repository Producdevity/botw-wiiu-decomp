extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0230b9f8(void*, const void*);
extern "C" unsigned char data_10015cc4[];

extern "C" void* fn_020bbe78(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    fn_0230b9f8(storage, arg);
    *(const void**)((char*)storage + 12) = data_10015cc4;
    return storage;
}
