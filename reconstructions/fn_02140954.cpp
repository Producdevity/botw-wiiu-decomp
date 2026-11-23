extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02140350(void*, const void*);
extern "C" unsigned char data_1002b9f8[];

extern "C" void* fn_02140954(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(124);
        if (!storage)
            return storage;
    }
    fn_02140350(storage, arg);
    *(const void**)((char*)storage + 12) = data_1002b9f8;
    return storage;
}
