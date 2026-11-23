extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_024f192c(void*, const void*);
extern "C" unsigned char data_100cea54[];

extern "C" void* fn_024f2450(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_024f192c(storage, arg);
    *(const void**)((char*)storage + 12) = data_100cea54;
    return storage;
}
