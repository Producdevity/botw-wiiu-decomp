typedef int s32;

struct SwarmEscapeDie;
extern "C" void fn_0290c344(SwarmEscapeDie*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10162150;

extern "C" void fn_0290ee18(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0290c344((SwarmEscapeDie*)arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10162150;
    fn_030e9aa8(arg0, (char *)arg0 + 0x48, &sp.f8);
}
