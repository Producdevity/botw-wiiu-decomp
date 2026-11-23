extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0245ef94(void*, const void*);
extern "C" unsigned char data_100bb290[];

extern "C" void* fn_0245d664(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(64);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0245ef94(storage, a);
    *(const void**)((char*)storage + 12) = data_100bb290;
    *(unsigned*)((char*)storage + 60) = 0;
    return storage;
}
