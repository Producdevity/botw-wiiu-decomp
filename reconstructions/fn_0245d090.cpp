extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02345928(void*, const void*);
extern "C" unsigned char data_100bb0e4[];

extern "C" void* fn_0245d090(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    fn_02345928(storage, arg);
    *(const void**)((char*)storage + 12) = data_100bb0e4;
    return storage;
}
