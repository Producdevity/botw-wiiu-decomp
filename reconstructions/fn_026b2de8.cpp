extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0253b034(void*, const void*);
extern "C" unsigned char data_1010f3d8[];

extern "C" void* fn_026b2de8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    fn_0253b034(storage, arg);
    *(const void**)((char*)storage + 12) = data_1010f3d8;
    return storage;
}
