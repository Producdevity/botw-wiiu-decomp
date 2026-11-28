extern "C" void fn_03173344(void*, void*);
extern "C" void fn_031734f8(void*, void*);
extern "C" void fn_03173598(void*, void*);
extern "C" void fn_0317383c(void*, void*);

extern "C" void fn_03173a4c(void* object, void* context) {
    if (context != 0) {
        fn_03173344(object, context);
        fn_031734f8(object, context);
        fn_03173598(object, context);
        fn_0317383c(object, context);
    }
}
