extern "C" int data_101d0e30;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_02c6430c(void* storage, const void* arg);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02c998dc(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_02c6430c(storage, a);
    *(const void**)((char*)storage + 12) = &data_101d0e30;
    *(int*)((char*)storage + 20) = 0;
    void* field = (char*)storage + 20;
    void* member = (char*)field + 4;
    if (!member) {
        member = fn_0308e578(8);
        if (!member)
            return storage;
    }
    {
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + 0) = data_10263a00;
    }
    return storage;
}
