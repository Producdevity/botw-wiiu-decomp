extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0246982c(void*, const void*);
extern "C" unsigned char data_100bd904[];

extern "C" void* fn_0246a548(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(52);
        if (!storage)
            return storage;
    }
    fn_0246982c(storage, arg);
    *(const void**)((char*)storage + 12) = data_100bd904;
    return storage;
}
