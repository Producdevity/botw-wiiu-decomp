extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02bef7f8(void*, const void*);
extern "C" unsigned char data_101ba5f8[];
extern "C" unsigned char data_101ba7e0[];

extern "C" void* fn_02bd5ac0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(324);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02bef7f8(storage, a);
    *(const void**)((char*)storage + 12) = data_101ba5f8;
    *(const void**)((char*)storage + 20) = data_101ba7e0;
    *(unsigned char*)((char*)storage + 320) = 0;
    return storage;
}
