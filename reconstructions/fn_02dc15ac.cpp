extern "C" void fn_02dc0ea4(void*, void*, void*);
extern "C" void fn_031b9154(void*, void*, void*);

extern "C" void fn_02dc15ac(void* object, void* other, void* extra) {
    fn_031b9154(object, other, extra);
    fn_02dc0ea4(object, other, extra);
}
