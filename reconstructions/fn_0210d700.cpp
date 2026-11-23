extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0210da34(void*, const void*);
extern "C" unsigned char data_100234ac[];

extern "C" void* fn_0210d700(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(120);
        if (!storage)
            return storage;
    }
    fn_0210da34(storage, arg);
    *(const void**)((char*)storage + 12) = data_100234ac;
    return storage;
}
