extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0241772c(void*, const void*);
extern "C" unsigned char data_100ae92c[];

extern "C" void* fn_0241896c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(136);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0241772c(storage, a);
    *(const void**)((char*)storage + 12) = data_100ae92c;
    *(unsigned char*)((char*)storage + 132) = 0;
    return storage;
}
