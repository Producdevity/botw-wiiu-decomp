extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0246812c(void*, const void*);
extern "C" unsigned char data_100129cc[];

extern "C" void* fn_02093db0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(284);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0246812c(storage, a);
    *(const void**)((char*)storage + 12) = data_100129cc;
    *(unsigned*)((char*)storage + 280) = 0;
    return storage;
}
