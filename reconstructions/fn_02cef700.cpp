typedef void (*Method)(void*);

extern "C" void fn_02d6b514(void* owner);
extern "C" int fn_02a155e0(void* manager);
extern "C" void fn_030ea2cc(void* object);
extern "C" void* data_10463708;

extern "C" void fn_02cef700(void** object) {
    fn_02d6b514(*object);
    if (data_10463708 != 0 && fn_02a155e0(data_10463708) != 0) {
        void* owner = *object;
        (*(Method*)((char*)*(void**)((char*)owner + 0xE8) + 0xB54))(owner);
        fn_030ea2cc(object);
    }
}
