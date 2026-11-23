typedef unsigned short u16;

struct IntrusiveList;
extern "C" void fn_0308e9e8(IntrusiveList *);
extern "C" void fn_030a5c78(void*);
extern "C" void fn_030a9714(void*, void*, void*);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_030a7d30(void *arg0) {
    void *var_r31;

    var_r31 = 0;
    if ((*(u16 *)((char *)(arg0) + (0x90))) & 1) {
        var_r31 = (char *)arg0 + 0x54;
        fn_030bb668(var_r31);
    }
    fn_030a9714(arg0, 0, 0);
    fn_0308e9e8((IntrusiveList *)((char *)arg0 + 0xA8));
    fn_0308e9e8((IntrusiveList *)((char *)arg0 + 0x98));
    fn_030a5c78(arg0);
    if (var_r31 != 0) {
        fn_030bb69c(var_r31);
    }
}
