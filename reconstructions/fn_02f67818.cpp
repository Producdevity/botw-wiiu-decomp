extern "C" void fn_03588264(void*);
extern "C" unsigned fn_02eaa2a4(void*);
extern "C" void fn_02f22f20(void*, void*);
extern "C" void* data_104722a8;
extern "C" void* data_104698f8;

extern "C" void fn_02f67818(char* self) {
    if (*(void**)(self + 0x21A8) != 0) {
        fn_03588264(data_104722a8);
        fn_02f22f20(*(void**)(self + 0x21A8), (void*)fn_02eaa2a4(data_104698f8));
    }
}
