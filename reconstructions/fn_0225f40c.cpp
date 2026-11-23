extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0225eecc(void*, const void*);
extern "C" unsigned char data_100652d4[];

extern "C" void* fn_0225f40c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(120);
        if (!storage)
            return storage;
    }
    fn_0225eecc(storage, arg);
    *(const void**)((char*)storage + 12) = data_100652d4;
    return storage;
}
