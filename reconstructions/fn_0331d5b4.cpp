struct HandleSlot;

extern "C" void* fn_0308e578(unsigned size);
extern "C" HandleSlot* fn_0378dca0(HandleSlot* storage);
extern "C" unsigned char data_102af118[];
extern "C" const float data_102af09c;

extern "C" void* fn_0331d5b4(void* storage) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    *(const void**)((char*)storage + 36) = data_102af118;
    {
        char* m1 = (char*)storage;
        if (!m1)
            m1 = (char*)fn_0308e578(4);
        if (m1) {
            *(unsigned*)(m1) = 0;
        }
    }
    *(unsigned*)((char*)storage + 4) = 0;
    {
        char* m2 = (char*)storage + 8;
        if (!m2)
            m2 = (char*)fn_0308e578(4);
        if (m2) {
            *(unsigned*)(m2) = 0;
        }
    }
    *(unsigned*)((char*)storage + 12) = 0;
    {
        char* m3 = (char*)storage + 16;
        if (!m3)
            m3 = (char*)fn_0308e578(12);
        if (m3) {
            fn_0378dca0((HandleSlot*)(m3));
        }
    }
    *(unsigned*)((char*)storage + 28) = 0;
    *(float*)((char*)storage + 32) = data_102af09c;
    return storage;
}
