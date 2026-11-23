typedef unsigned short u16;
typedef unsigned int u32;

extern "C" int fn_037b7cac(void*);
extern "C" void fn_037b7e9c(void *, unsigned int, void *);

extern "C" void fn_02d2babc(void *arg0) {
    if (fn_037b7cac(arg0) != 0) {
        fn_037b7e9c(arg0, (u32) (*(u16 *)((char *)(arg0) + (0x14))), 0);
    }
}
