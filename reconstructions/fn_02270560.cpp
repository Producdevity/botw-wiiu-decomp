extern "C" int data_1006896c;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_0210e57c(void* storage, const void* arg);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02270560(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(132);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_0210e57c(storage, a);
    *(const void**)((char*)storage + 12) = &data_1006896c;
    *(int*)((char*)storage + 120) = 0;
    void* field = (char*)storage + 120;
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
