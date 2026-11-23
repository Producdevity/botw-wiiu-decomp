typedef unsigned char u8;
typedef int s32;

extern "C" int fn_03c19088(void*);
extern "C" void fn_03c1942c(void*);
extern "C" unsigned char fn_03c2dabc(void);

extern "C" void fn_03be6920(void *arg0) {
    if (((s32) (*(u8 *)((char *)(arg0) + (4))) != 0) && (fn_03c2dabc() != 0) && (fn_03c19088((char *)arg0 + 0x88C) != 0)) {
        fn_03c1942c((char *)arg0 + 0x88C);
    }
}
