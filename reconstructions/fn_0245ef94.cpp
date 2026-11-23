extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0245c95c(void*, const void*);
extern "C" unsigned char data_100bb708[];

extern "C" void* fn_0245ef94(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0245c95c(storage, a);
    *(const void**)((char*)storage + 12) = data_100bb708;
    *(unsigned*)((char*)storage + 52) = 0;
    *(unsigned*)((char*)storage + 56) = 0;
    return storage;
}
