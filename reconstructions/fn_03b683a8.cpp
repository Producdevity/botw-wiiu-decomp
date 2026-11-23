extern "C" void fn_03b68354(void*, void*);
extern "C" void fn_04348048(void*, void*, int);

extern "C" void fn_03b683a8(void *arg0, void *arg1) {
    (*(void **)((char *)(arg0) + (0xC))) = arg1;
    fn_04348048(arg0, 0, 1);
    fn_03b68354(arg0, (*(void **)((char *)(arg0) + (0xC))));
}
