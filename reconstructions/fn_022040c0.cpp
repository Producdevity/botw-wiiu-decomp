extern "C" void fn_02203f40(void*);
struct Owner;
extern "C" bool fn_02953498(void*, int, int, int, int);

extern "C" void fn_022040c0(struct Owner **handle) {
    if (fn_02953498(*handle, 0x47, 0, 0, 0) != 0) {
        fn_02203f40(handle);
    }
}
