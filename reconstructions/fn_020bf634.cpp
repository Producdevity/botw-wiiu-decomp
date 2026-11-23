extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0236ff5c(void*, const void*);
extern "C" unsigned char data_10016920[];

extern "C" void* fn_020bf634(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    fn_0236ff5c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10016920;
    return storage;
}
