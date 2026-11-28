extern "C" void fn_038dc6e0(void*, void*, void*, int);
extern "C" void fn_038dcb00(void*, void*, void*);
extern "C" void fn_038dcd70(void*, void*, void*);
extern "C" void fn_038dcf54(void*, void*);
extern "C" void fn_038dd350(void*, void*);

extern "C" void fn_038dd474(void *object, void *context, void *first, void *second, void *third, void *fourth) {
    fn_038dc6e0(object, context, first, 0);
    fn_038dc6e0(object, context, second, 1);
    fn_038dcb00(object, context, third);
    fn_038dcd70(object, context, fourth);
    fn_038dcf54(object, context);
    fn_038dd350(object, context);
}
