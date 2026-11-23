extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020be4b8(void*, const void*);
extern "C" unsigned char data_100162f8[];

extern "C" void* fn_020bdfd4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(16);
        if (!storage)
            return storage;
    }
    fn_020be4b8(storage, arg);
    *(const void**)((char*)storage + 12) = data_100162f8;
    return storage;
}
