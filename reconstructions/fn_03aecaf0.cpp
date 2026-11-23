extern "C" void fn_03a4d6c8(unsigned *);
extern "C" void fn_03ac4e2c(void*, void*);

extern "C" void *data_1047eb9c;

extern "C" void fn_03aecaf0(void *arg0) {
    fn_03ac4e2c(data_1047eb9c, (*(void **)((char *)(arg0) + (0x68C))));
    (*(void **)((char *)(arg0) + (0x68C))) = 0;
    fn_03a4d6c8((unsigned int *)((char *)arg0 + 0x690));
}
