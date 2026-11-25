typedef int s32;

struct AppearFromTarget;
extern "C" void fn_024e1284(AppearFromTarget*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100cbd7c;

extern "C" void fn_024e2514(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_024e1284((AppearFromTarget*)arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100cbd7c;
    fn_030e9be0(arg0, (char *)arg0 + 0x50, &sp.f8);
}
