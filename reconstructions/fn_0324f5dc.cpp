typedef signed char s8;

extern "C" int fn_0324f464(void*);

extern "C" void fn_0324f5dc(void *arg0) {
    (*(s8 *)((char *)(arg0) + (0x98))) = 0;
    if (fn_0324f464(arg0) == 0) {
        (*(s8 *)((char *)(arg0) + (0x98))) = 1;
    }
}
