extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021328a0(void*, const void*);
extern "C" unsigned char data_10029610[];

extern "C" void* fn_02133d3c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(244);
        if (!storage)
            return storage;
    }
    fn_021328a0(storage, arg);
    *(const void**)((char*)storage + 12) = data_10029610;
    return storage;
}
