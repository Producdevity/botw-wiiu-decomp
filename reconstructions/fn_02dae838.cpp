typedef signed char s8;

extern "C" void fn_037932f0(void*, void*);
extern "C" char * data_1047c258;

extern "C" void fn_02dae838(void *arg0) {
    void* const* vt1;
    s8 *temp_r31;
    void **temp_r3;

    temp_r3 = (*(void ***)((char *)(arg0) + (0x38)));
    temp_r31 = (s8 *)(data_1047c258);
    fn_037932f0(temp_r31, ((void * (*)(void **))(vt1 = *(void* const**)&(*temp_r3))[73])(temp_r3));
}
