extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025a86c0(void*, const void*);
extern "C" unsigned char data_10112ba0[];

extern "C" void* fn_026cbca0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    fn_025a86c0(storage, arg);
    *(const void**)((char*)storage + 12) = data_10112ba0;
    return storage;
}
