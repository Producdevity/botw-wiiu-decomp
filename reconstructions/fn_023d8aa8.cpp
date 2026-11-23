extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023bd970(void*, const void*);
extern "C" unsigned char data_100a410c[];

extern "C" void* fn_023d8aa8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(244);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_023bd970(storage, a);
    *(const void**)((char*)storage + 12) = data_100a410c;
    *(unsigned*)((char*)storage + 240) = 0;
    return storage;
}
