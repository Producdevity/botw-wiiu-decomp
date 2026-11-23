extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02722d70(void*, const void*);
extern "C" unsigned char data_100fc420[];

extern "C" void* fn_026364c0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(400);
        if (!storage)
            return storage;
    }
    fn_02722d70(storage, arg);
    *(const void**)((char*)storage + 12) = data_100fc420;
    return storage;
}
