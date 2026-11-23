extern "C" int data_10056eb0;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_02217618(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02216e94(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_02217618(storage, a);
    *(const void**)((char*)storage + 12) = &data_10056eb0;
    void* member = (char*)storage + 88;
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
