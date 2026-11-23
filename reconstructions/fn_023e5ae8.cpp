extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022df220(void*, const void*);
extern "C" unsigned char data_100a6324[];

extern "C" void* fn_023e5ae8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(88);
        if (!storage)
            return storage;
    }
    fn_022df220(storage, arg);
    *(const void**)((char*)storage + 12) = data_100a6324;
    return storage;
}
