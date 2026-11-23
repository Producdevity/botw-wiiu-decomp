extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029c2ed8(void*, const void*);
extern "C" unsigned char data_1017d61c[];

extern "C" void* fn_029c45b4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_029c2ed8(storage, a);
    *(const void**)((char*)storage + 16) = data_1017d61c;
    *(unsigned*)((char*)storage + 64) = 0;
    *(unsigned*)((char*)storage + 68) = 0;
    return storage;
}
