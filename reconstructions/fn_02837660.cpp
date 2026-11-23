extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0283417c(void*, const void*);
extern "C" unsigned char data_10141f1c[];

extern "C" void* fn_02837660(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(84);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0283417c(storage, a);
    *(const void**)((char*)storage + 12) = data_10141f1c;
    *(unsigned char*)((char*)storage + 80) = 0;
    return storage;
}
