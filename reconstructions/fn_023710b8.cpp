extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0237196c(void*, const void*);
extern "C" unsigned char data_10092024[];

extern "C" void* fn_023710b8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(676);
        if (!storage)
            return storage;
    }
    fn_0237196c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10092024;
    return storage;
}
