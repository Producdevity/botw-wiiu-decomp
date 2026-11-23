extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0230afec(void*, const void*);
extern "C" unsigned char data_1006b214[];

extern "C" void* fn_0227c1b4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(140);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0230afec(storage, a);
    *(const void**)((char*)storage + 12) = data_1006b214;
    *(unsigned*)((char*)storage + 136) = 0;
    return storage;
}
