extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02af9174(void*, const void*);
extern "C" unsigned char data_10004a70[];
extern "C" unsigned char data_10004a50[];

extern "C" void* fn_0202358c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02af9174(storage, a);
    *(const void**)((char*)storage + 28) = data_10004a70;
    *(const void**)((char*)storage + 32) = data_10004a50;
    *(unsigned char*)((char*)storage + 76) = 0;
    return storage;
}
