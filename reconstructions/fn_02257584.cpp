extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02253254(void*, const void*);
extern "C" unsigned char data_100632e0[];

extern "C" void* fn_02257584(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(16);
        if (!storage)
            return storage;
    }
    fn_02253254(storage, arg);
    *(const void**)((char*)storage + 12) = data_100632e0;
    return storage;
}
