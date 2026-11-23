extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022f88cc(void*, const void*);
extern "C" unsigned char data_100672f4[];

extern "C" void* fn_0226a240(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(144);
        if (!storage)
            return storage;
    }
    fn_022f88cc(storage, arg);
    *(const void**)((char*)storage + 12) = data_100672f4;
    return storage;
}
