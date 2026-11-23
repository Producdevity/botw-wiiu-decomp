extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02596418(void*, const void*);
extern "C" unsigned char data_100d3790[];

extern "C" void* fn_0250d77c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(76);
        if (!storage)
            return storage;
    }
    fn_02596418(storage, arg);
    *(const void**)((char*)storage + 12) = data_100d3790;
    return storage;
}
