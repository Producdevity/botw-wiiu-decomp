struct FastMutexSection;

extern "C" void* fn_0308e578(unsigned size);
extern "C" FastMutexSection* fn_030bb49c(FastMutexSection* storage);
extern "C" unsigned char data_102a34e0[];

extern "C" void* fn_032a0e7c(void* storage) {
    if (!storage) {
        storage = fn_0308e578(100);
        if (!storage)
            return storage;
    }
    *(const void**)((char*)storage) = data_102a34e0;
    fn_030bb49c((FastMutexSection*)((char*)storage + 4));
    {
        char* m1 = (char*)storage + 64;
        if (!m1)
            m1 = (char*)fn_0308e578(1);
        if (m1) {
            *(unsigned char*)(m1) = 0;
        }
    }
    *(unsigned*)((char*)storage + 68) = 0;
    {
        char* m2 = (char*)storage + 72;
        if (!m2)
            m2 = (char*)fn_0308e578(8);
        if (m2) {
            *(unsigned*)(m2) = 0;
            *(unsigned*)(m2 + 4) = 0;
        }
    }
    *(unsigned*)((char*)storage + 80) = 0;
    *(unsigned*)((char*)storage + 84) = 0;
    {
        char* m3 = (char*)storage + 88;
        if (!m3)
            m3 = (char*)fn_0308e578(8);
        if (m3) {
            *(unsigned*)(m3) = 0;
            *(unsigned*)(m3 + 4) = 0;
        }
    }
    *(unsigned*)((char*)storage + 96) = 0;
    return storage;
}
