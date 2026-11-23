extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0241e4fc(void*, const void*);
extern "C" unsigned char data_100afe38[];

extern "C" void* fn_0241e234(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(92);
        if (!storage)
            return storage;
    }
    fn_0241e4fc(storage, arg);
    *(const void**)((char*)storage + 12) = data_100afe38;
    return storage;
}
