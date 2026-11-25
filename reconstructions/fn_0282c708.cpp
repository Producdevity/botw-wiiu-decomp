extern "C" void fn_0281c000(void*, void*);
extern "C" void fn_02b482e0(void*, void*);

extern "C" void fn_0282c708(void **self, void *arg) {
    if (arg != 0) {
        void *head = *self;
        fn_02b482e0(arg, head);
        fn_0281c000(self, arg);
    }
}
