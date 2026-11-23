extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_028cab78(void*, const void*);
extern "C" unsigned char data_1015730c[];

extern "C" void* fn_028be900(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(536);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_028cab78(storage, a);
    *(const void**)((char*)storage + 12) = data_1015730c;
    *(unsigned char*)((char*)storage + 532) = 0;
    return storage;
}
