extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0239b2d4(void*, const void*);
extern "C" unsigned char data_1009919c[];

extern "C" void* fn_0239ba14(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(112);
        if (!storage)
            return storage;
    }
    fn_0239b2d4(storage, arg);
    *(const void**)((char*)storage + 12) = data_1009919c;
    return storage;
}
