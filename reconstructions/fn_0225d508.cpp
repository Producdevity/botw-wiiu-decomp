extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0225d1ac(void*, const void*);
extern "C" unsigned char data_100647dc[];

extern "C" void* fn_0225d508(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(148);
        if (!storage)
            return storage;
    }
    fn_0225d1ac(storage, arg);
    *(const void**)((char*)storage + 12) = data_100647dc;
    return storage;
}
