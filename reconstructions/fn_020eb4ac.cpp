extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020ea474(void*, const void*);
extern "C" unsigned char data_1001d654[];

extern "C" void* fn_020eb4ac(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(84);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_020ea474(storage, a);
    *(const void**)((char*)storage + 12) = data_1001d654;
    *(unsigned*)((char*)storage + 76) = 0;
    *(unsigned*)((char*)storage + 80) = 0;
    return storage;
}
