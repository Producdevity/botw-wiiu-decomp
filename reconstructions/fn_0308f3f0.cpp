extern "C" unsigned char data_10549628[];
extern "C" void fn_0308f090(void*);

extern "C" void fn_0308f3f0(void* arg0, int arg1) {
    void* temp_r3;

    if (((int) (*(unsigned char*)((char*)arg0 + 36)) != 0) && ((void* ) (*(void**)((char*)arg0 + 32)) != 0)) {
        fn_0308f090(data_10549628);
        temp_r3 = (*(void**)((char*)arg0 + 32));
        (*(int (**)(void*, int))((char*)((*(void**)((char*)temp_r3 + 12))) + 44))(temp_r3, arg1);
    }
}
