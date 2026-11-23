extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023bd970(void*, const void*);
extern "C" unsigned char data_100a4b94[];

extern "C" void* fn_023dbeb8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(240);
        if (!storage)
            return storage;
    }
    fn_023bd970(storage, arg);
    *(const void**)((char*)storage + 12) = data_100a4b94;
    return storage;
}
