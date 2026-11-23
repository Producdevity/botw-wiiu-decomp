extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0281b668(void*, const void*);
extern "C" unsigned char data_101405b8[];

extern "C" void* fn_0282cfa8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    fn_0281b668(storage, arg);
    *(const void**)((char*)storage + 12) = data_101405b8;
    return storage;
}
