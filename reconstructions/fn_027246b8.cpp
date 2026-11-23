extern "C" void fn_027234dc(void*, void*);
struct Owner;
extern "C" bool fn_029534d8(void*, int, int, int, int);

extern "C" void fn_027246b8(void *arg0) {
    if (fn_029534d8((*(struct Owner **)((char *)(arg0) + (0))), 0x2C, 0, 0, 0) != 0) {
        fn_027234dc(arg0, (*(void **)((char *)(arg0) + (0x50))));
    }
}
