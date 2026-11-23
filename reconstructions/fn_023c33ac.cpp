extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022d1ae0(void*, const void*);
extern "C" unsigned char data_100a1324[];

extern "C" void* fn_023c33ac(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(168);
        if (!storage)
            return storage;
    }
    fn_022d1ae0(storage, arg);
    *(const void**)((char*)storage + 12) = data_100a1324;
    return storage;
}
