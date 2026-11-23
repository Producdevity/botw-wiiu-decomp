extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_030ff6a0(void*, const void*);
extern "C" unsigned char data_1017dd28[];
extern "C" const float data_1017dca4;

extern "C" void* fn_029c6b2c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    fn_030ff6a0(storage, arg);
    *(const void**)((char*)storage + 16) = data_1017dd28;
    {
        char* m1 = (char*)storage + 20;
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
        char* m2 = (char*)storage + 60;
        if (!m2)
            m2 = (char*)fn_0308e578(36);
        if (m2) {
            *(float*)(m2) = data_1017dca4;
            *(float*)(m2 + 4) = data_1017dca4;
            *(float*)(m2 + 8) = data_1017dca4;
            *(float*)(m2 + 12) = data_1017dca4;
            *(float*)(m2 + 16) = data_1017dca4;
            *(float*)(m2 + 20) = data_1017dca4;
            *(float*)(m2 + 24) = data_1017dca4;
            *(float*)(m2 + 28) = data_1017dca4;
            *(float*)(m2 + 32) = data_1017dca4;
        }
    }
    return storage;
}
