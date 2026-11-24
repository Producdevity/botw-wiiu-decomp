struct Opaque_025afff4;

extern "C" bool fn_025afff4(Opaque_025afff4* self, void* context);
extern "C" void fn_02603858(void*, void*);

extern "C" void fn_025b342c(void *arg0, void *arg1) {
    fn_025afff4((Opaque_025afff4*)((char *)arg0 + 0x50), arg1);
    fn_02603858(arg0, arg1);
}
