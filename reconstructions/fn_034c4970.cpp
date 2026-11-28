extern "C" int fn_034928d8(void*, void*, void*);
extern "C" void fn_034c6c70(void*, void*, void*, void*);

extern "C" void fn_034c4970(void *object, void *first, void *second) {
    fn_034c6c70(object, (void *)(fn_034928d8(first, second, 0)), second, 0);
}
