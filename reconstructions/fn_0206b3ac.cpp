extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020ea474(void*, const void*);
extern "C" unsigned char data_1000b060[];

extern "C" void* fn_0206b3ac(void*storage, const void*arg) {
    if (!storage) {
        storage = fn_0308e578(76);
        if (!storage)
            return storage;
    }
    fn_020ea474((void*)storage, (const void*)arg);
    *(const void**)((char*)storage + 12) = data_1000b060;
    return storage;
}
