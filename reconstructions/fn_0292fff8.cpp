extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02919844(void*, const void*);
extern "C" unsigned char data_10169114[];

extern "C" void* fn_0292fff8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02919844(storage, a);
    *(const void**)((char*)storage + 12) = data_10169114;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
