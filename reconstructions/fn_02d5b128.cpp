typedef float f32;

extern "C" void fn_02a2ca70(void*);
extern "C" int fn_03089a30(void);
extern "C" char* data_10463798;

extern "C" f32 data_101e5360;
extern "C" void *data_1046380c;

extern "C" void fn_02d5b128(void) {
    if (fn_03089a30() != 0) {
        fn_02a2ca70(data_10463798);
        if ((void *) data_1046380c != 0) {
            (*(f32 *)((char *)(data_1046380c) + (0x24))) = (f32) data_101e5360;
        }
    }
}
