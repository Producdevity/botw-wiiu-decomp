extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0210da34(void*, const void*);
extern "C" unsigned char data_10022ba8[];

extern "C" void* fn_02109a24(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(120);
        if (!storage)
            return storage;
    }
    fn_0210da34(storage, arg);
    *(const void**)((char*)storage + 12) = data_10022ba8;
    return storage;
}
