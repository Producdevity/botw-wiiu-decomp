extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_026b3658(void*, const void*);
extern "C" unsigned char data_10175bb0[];

extern "C" void* fn_02993648(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(128);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_026b3658(storage, a);
    *(const void**)((char*)storage + 12) = data_10175bb0;
    *(unsigned*)((char*)storage + 124) = 0;
    return storage;
}
