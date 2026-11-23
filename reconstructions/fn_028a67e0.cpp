extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025918dc(void*, const void*);
extern "C" unsigned char data_101541d0[];

extern "C" void* fn_028a67e0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(196);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_025918dc(storage, a);
    *(const void**)((char*)storage + 12) = data_101541d0;
    *(unsigned*)((char*)storage + 188) = 0;
    *(unsigned*)((char*)storage + 192) = 0;
    return storage;
}
