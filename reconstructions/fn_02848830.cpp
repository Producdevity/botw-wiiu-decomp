extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0284bb90(void*, const void*);
extern "C" unsigned char data_101446dc[];

extern "C" void* fn_02848830(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(124);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0284bb90(storage, a);
    *(const void**)((char*)storage + 12) = data_101446dc;
    *(unsigned*)((char*)storage + 120) = 0;
    return storage;
}
