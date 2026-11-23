extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02303c58(void*, const void*);
extern "C" unsigned char data_1007ef3c[];

extern "C" void* fn_0230478c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(340);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02303c58(storage, a);
    *(const void**)((char*)storage + 12) = data_1007ef3c;
    *(unsigned*)((char*)storage + 336) = 0;
    return storage;
}
