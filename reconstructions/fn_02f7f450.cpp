extern "C" void fn_02a2d6d4(void*, void*);
extern "C" char* data_10463798;

extern "C" void fn_02f7f450(void *arg0, void *arg1) {
    fn_02a2d6d4(data_10463798, arg1);
    (*(void **)((char *)(arg0) + (0x1CDC))) = arg1;
}
