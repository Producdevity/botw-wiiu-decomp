extern "C" void fn_03a43bac(void*, void*);
extern "C" void fn_03a43fe0(void*);
extern "C" void fn_03a44a70(void*, void*);

extern "C" void fn_03a4740c(void *object, void *context) {
    fn_03a43bac(object, context);
    fn_03a43fe0(object);
    fn_03a44a70(object, context);
}
