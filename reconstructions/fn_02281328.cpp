extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02281d44(void*, const void*);
extern "C" unsigned char data_1006c0ec[];

extern "C" void* fn_02281328(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(112);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02281d44(storage, a);
    *(const void**)((char*)storage + 12) = data_1006c0ec;
    *(unsigned*)((char*)storage + 104) = 0;
    *(unsigned*)((char*)storage + 108) = 0;
    return storage;
}
