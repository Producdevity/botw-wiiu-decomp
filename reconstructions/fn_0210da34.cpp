extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020f44cc(void*, const void*);
extern "C" unsigned char data_10023644[];

extern "C" void* fn_0210da34(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(120);
        if (!storage)
            return storage;
    }
    fn_020f44cc(storage, arg);
    *(const void**)((char*)storage + 12) = data_10023644;
    return storage;
}
