extern "C" int data_100b22b8;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_024284ec(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02429a1c(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(76);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_024284ec(storage, a);
    *(const void**)((char*)storage + 12) = &data_100b22b8;
    void* member = (char*)storage + 68;
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
