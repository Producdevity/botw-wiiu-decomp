extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02281d44(void*, const void*);
extern "C" unsigned char data_10017530[];

extern "C" void* fn_020c3ca4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(108);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02281d44(storage, a);
    *(const void**)((char*)storage + 12) = data_10017530;
    *(unsigned*)((char*)storage + 104) = 0;
    return storage;
}
