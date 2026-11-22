extern "C" void* data_1047c244;
extern "C" bool fn_0378f210(void* system);
extern "C" void fn_030bb668(void* context);

extern "C" void* fn_0378d87c(void* context) {
    if (fn_0378f210(data_1047c244))
        return 0;
    fn_030bb668(context);
    return context;
}
