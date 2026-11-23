extern "C" void fn_02a19850(void* manager, void* entry, void* extra);
extern "C" void* data_10463748;

extern "C" void fn_02561d60(void* object) {
    void* manager = data_10463748;
    if (manager != 0) {
        void* entry = *(void**)object;
        if (entry != 0) {
            fn_02a19850(manager, entry, 0);
            **(float**)((char*)object + 0x28) = *(float*)((char*)manager + 0xA70);
        }
    }
}
