extern "C" int data_1006a738;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_0226abcc(void*, const void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02279b4c(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(120);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_0226abcc(storage, a);
    *(const void**)((char*)storage + 12) = &data_1006a738;
    *(int*)((char*)storage + 108) = 0;
    void* field = (char*)storage + 108;
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
