extern "C" int data_100ad610;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_024103a8(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02411568(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(168);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_024103a8(storage, a);
    *(const void**)((char*)storage + 12) = &data_100ad610;
    *(int*)((char*)storage + 156) = 0;
    void* field = (char*)storage + 156;
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
