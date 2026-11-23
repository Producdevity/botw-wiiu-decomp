extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021cc944(void*, const void*);
extern "C" unsigned char data_1003793c[];

extern "C" void* fn_0217df34(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_021cc944(storage, a);
    *(const void**)((char*)storage + 12) = data_1003793c;
    *(unsigned*)((char*)storage + 76) = 0;
    return storage;
}
