extern "C" void fn_02c156c4(void*);
extern "C" void fn_02c15754(void*, void*, void*);
extern "C" void fn_02c15a74(void*, void*, void*);
extern "C" void fn_02c15cbc(void*);
extern "C" void fn_02c1c560(void*);

extern "C" void fn_02c11cd4(void* self)
{
    void* first = *(void**)((char*)self + 0xc);
    if (first != 0) {
        fn_02c15cbc(first);
        void* current = *(void**)((char*)self + 0xc);
        (*(int (**)(void*, void*))(*(char**)((char*)current + 0x1e4) + 0x14))(current, *(void**)self);
    }
    void* second = *(void**)((char*)self + 8);
    if (second != 0) {
        fn_02c1c560(second);
        void* current = *(void**)((char*)self + 8);
        (*(int (**)(void*, void*))(*(char**)((char*)current + 0x1e4) + 0x14))(current, *(void**)self);
    }
    void* third = *(void**)((char*)self + 0x10);
    if (third != 0) {
        fn_02c156c4(*(void**)((char*)self + 0x10));
        fn_02c15a74(*(void**)((char*)self + 0x10), (char*)self + 0x1c, *(void**)self);
        fn_02c15754(*(void**)((char*)self + 0x10), (char*)self + 0x14, *(void**)self);
    }
}
