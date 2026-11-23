extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021cc944(void*, const void*);
extern "C" unsigned char data_10093580[];

extern "C" void* fn_0237a928(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(84);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_021cc944(storage, a);
    *(const void**)((char*)storage + 12) = data_10093580;
    *(unsigned*)((char*)storage + 76) = 0;
    *(unsigned*)((char*)storage + 80) = 0;
    return storage;
}
