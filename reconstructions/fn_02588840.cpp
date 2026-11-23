extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" unsigned char data_100e600c[];

extern "C" void* fn_02588840(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(88);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = data_100e600c;
    {
        char* m1 = (char*)storage + 32;
        if (!m1)
            m1 = (char*)fn_0308e578(40);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
            *(unsigned*)(m1 + 12) = 0;
            *(unsigned*)(m1 + 16) = 0;
            *(unsigned*)(m1 + 20) = 0;
            *(unsigned*)(m1 + 24) = 0;
            *(unsigned*)(m1 + 28) = 0;
            *(unsigned*)(m1 + 32) = 0;
            *(unsigned*)(m1 + 36) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 72;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(unsigned*)(m2) = 0;
            *(unsigned*)(m2 + 4) = 0;
            *(unsigned*)(m2 + 8) = 0;
        }
    }
    *(unsigned*)((char*)storage + 84) = 0;
    return storage;
}
