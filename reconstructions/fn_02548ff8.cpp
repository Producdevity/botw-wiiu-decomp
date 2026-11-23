extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025479d4(void*, const void*);
extern "C" unsigned char data_100dbc28[];

extern "C" void* fn_02548ff8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(148);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_025479d4(storage, a);
    *(const void**)((char*)storage + 12) = data_100dbc28;
    *(unsigned*)((char*)storage + 140) = 0;
    *(unsigned*)((char*)storage + 144) = 0;
    return storage;
}
