typedef int s32;

extern "C" int fn_025435e0(void*);
extern "C" void fn_025436b0(void*);
extern "C" void fn_026dc754(void*);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" bool fn_037b82e8(void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100daca8;

extern "C" void fn_02543754(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_026dc754(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100daca8;
    if ((fn_037b82e8(arg0, &sp.f8) == 0) && (fn_025435e0(arg0) != 0)) {
        fn_025436b0(arg0);
        fn_037b8284(arg0, &data_100daca8, 0);
    }
}
