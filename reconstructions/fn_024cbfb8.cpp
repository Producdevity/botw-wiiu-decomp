extern "C" int data_100c8fa4;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_02851ab8(void*, const void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_024cbfb8(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_02851ab8(storage, a);
    *(const void**)((char*)storage + 12) = &data_100c8fa4;
    *(int*)((char*)storage + 60) = 0;
    void* field = (char*)storage + 60;
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
