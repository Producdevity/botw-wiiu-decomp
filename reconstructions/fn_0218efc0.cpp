extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_032676b0(void*, const void*);
extern "C" unsigned char data_1003ad1c[];

extern "C" void* fn_0218efc0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(100);
        if (!storage)
            return storage;
    }
    fn_032676b0(storage, arg);
    *(const void**)((char*)storage + 12) = data_1003ad1c;
    *(unsigned*)((char*)storage + 32) = 0;
    {
        char* m1 = (char*)storage + 36;
        if (!m1)
            m1 = (char*)fn_0308e578(64);
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
            *(unsigned*)(m1 + 40) = 0;
            *(unsigned*)(m1 + 44) = 0;
            *(unsigned*)(m1 + 48) = 0;
            *(unsigned*)(m1 + 52) = 0;
            *(unsigned*)(m1 + 56) = 0;
            *(unsigned*)(m1 + 60) = 0;
        }
    }
    return storage;
}
