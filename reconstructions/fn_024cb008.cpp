extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0255a404(void*, const void*);
extern "C" unsigned char data_100c8c1c[];

extern "C" void* fn_024cb008(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(348);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0255a404(storage, a);
    *(const void**)((char*)storage + 12) = data_100c8c1c;
    *(unsigned*)((char*)storage + 344) = 0;
    return storage;
}
