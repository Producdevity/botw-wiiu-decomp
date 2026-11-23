extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025d15e4(void*, const void*);
extern "C" unsigned char data_101231d0[];

extern "C" void* fn_02748e58(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(120);
        if (!storage)
            return storage;
    }
    fn_025d15e4(storage, arg);
    *(const void**)((char*)storage + 12) = data_101231d0;
    return storage;
}
