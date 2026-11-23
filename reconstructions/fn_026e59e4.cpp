extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025583a8(void*, const void*);
extern "C" unsigned char data_10117098[];

extern "C" void* fn_026e59e4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(160);
        if (!storage)
            return storage;
    }
    fn_025583a8(storage, arg);
    *(const void**)((char*)storage + 12) = data_10117098;
    return storage;
}
