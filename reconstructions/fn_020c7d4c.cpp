extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_032ca7cc(void*, const void*);
extern "C" unsigned char data_10017ff0[];

extern "C" void* fn_020c7d4c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(64);
        if (!storage)
            return storage;
    }
    fn_032ca7cc(storage, arg);
    *(const void**)((char*)storage + 12) = data_10017ff0;
    return storage;
}
