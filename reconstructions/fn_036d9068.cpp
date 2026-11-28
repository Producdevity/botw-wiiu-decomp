extern "C" void fn_036d3020(void*, void*);
extern "C" void fn_036d877c(void*, void*, void*);

extern "C" void fn_036d9068(void *object, void *context) {
    fn_036d877c(object, context, 0);
    fn_036d3020(object, context);
}
