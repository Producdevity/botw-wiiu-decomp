extern "C" int fn_03c6de80(void*);
extern "C" void fn_03c6de9c(void*);
extern "C" void fn_03c6e09c(void*, int);
extern "C" void fn_03c6e4ac(void);

extern "C" void fn_03c66d20(void *arg0) {
    if (fn_03c6de80(arg0) != 0) {
        fn_03c6de9c(arg0);
        fn_03c6e4ac();
        fn_03c6e09c(arg0, 0);
    }
}
