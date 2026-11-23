extern "C" int fn_02a279dc(void* manager, void* owner);
extern "C" int fn_02a27ac4(void* manager, void* owner);
extern "C" void* data_1046378c;

extern "C" void fn_02982d80(void* object) {
    if (*((unsigned char*)object + 0x318) != 0) {
        void* manager = (char*)data_1046378c + 0x5C0;
        if (manager != 0 && fn_02a27ac4(manager, *(void**)object) != 0) {
            fn_02a279dc(manager, *(void**)object);
        }
    }
}
