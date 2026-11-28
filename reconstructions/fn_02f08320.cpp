extern "C" void fn_02f08184(void*, void*, int);
extern "C" void fn_02f0826c(void*, void*);

extern "C" void fn_02f08320(void *object, void *context) {
    fn_02f08184(object, context, 1);
    fn_02f0826c(object, context);
}
