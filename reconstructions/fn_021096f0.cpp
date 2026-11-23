extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0210da34(void*, const void*);
extern "C" unsigned char data_100229f8[];

extern "C" void* fn_021096f0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(120);
        if (!storage)
            return storage;
    }
    fn_0210da34(storage, arg);
    *(const void**)((char*)storage + 12) = data_100229f8;
    return storage;
}
