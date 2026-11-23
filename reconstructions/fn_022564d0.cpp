extern "C" int data_10062f68;
extern "C" float data_10062f2c;
extern "C" void fn_02254b00(void*, void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_022564d0(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(260);
        if (!storage)
            return storage;
    }
    fn_02254b00(storage, (void*)arg);
    *(const void**)((char*)storage + 12) = &data_10062f68;
    *(unsigned*)((char*)storage + 240) = 0;
    *(float*)((char*)storage + 244) = data_10062f2c;
    if (!((char*)storage + 248))
        fn_0308e578(12);
    return storage;
}
