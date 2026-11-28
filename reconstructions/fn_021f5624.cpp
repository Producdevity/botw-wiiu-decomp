extern "C" void fn_021f548c(void*);
struct Owner;
extern "C" bool fn_02953498(void*, int, int, int, int);

extern "C" void fn_021f5624(struct Owner **handle) {
    if (fn_02953498(*handle, 0x46, 0, 0, 0) != 0) {
        fn_021f548c(handle);
    }
}
