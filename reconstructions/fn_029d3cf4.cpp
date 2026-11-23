typedef signed char s8;

struct Owner;
extern "C" bool fn_029534d8(void*, int, int, int, int);
extern "C" void fn_029d3cdc(void*);

extern "C" void fn_029d3cf4(void *arg0) {
    (*(s8 *)((char *)(arg0) + (0x1C))) = 0;
    if (fn_029534d8((*(struct Owner **)((char *)(arg0) + (0))), 0, 0, 0, 0) != 0) {
        fn_029d3cdc(arg0);
    }
}
