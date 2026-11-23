typedef void (*Method)(void*);

extern "C" void* fn_021c6c48(void* object);
extern "C" void fn_031cb974(int manager, int value);
extern "C" int data_1046d3ac;

extern "C" void fn_021c6f00(void* object) {
    fn_031cb974(data_1046d3ac, **(int**)((char*)object + 0x10));
    if (data_1046d3ac != 0) {
        void* target = fn_021c6c48(object);
        if (target != 0) {
            (*(Method*)((char*)*(void**)((char*)target + 0xC) + 0x264))(target);
        }
    }
}
