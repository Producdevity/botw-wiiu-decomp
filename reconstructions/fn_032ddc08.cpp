typedef void* (*Getter)(void*);
typedef int (*Predicate)(void*);

extern "C" void fn_0330556c(void* entry);
extern "C" void fn_0379884c(void* owner, void* data);

extern "C" void fn_032ddc08(void* object) {
    void* owner = *(void**)object;
    void* entry = (*(Getter*)((char*)*(void**)((char*)owner + 0xE8) + 0x414))(owner);
    if (entry != 0) {
        fn_0330556c(entry);
    }
    if ((*(Predicate*)((char*)*(void**)((char*)object + 0xC) + 0x11C))(object) != 0) {
        fn_0379884c(owner, (char*)object + 0x20);
    }
}
