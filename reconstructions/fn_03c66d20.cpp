extern "C" int fn_03c6de80(void*);
extern "C" void fn_03c6de9c(void*);
extern "C" void fn_03c6e09c(void*, int);
extern "C" void fn_03c6e4ac(void);

extern "C" void fn_03c66d20(void *object) {
    if (fn_03c6de80(object) != 0) {
        fn_03c6de9c(object);
        fn_03c6e4ac();
        fn_03c6e09c(object, 0);
    }
}
