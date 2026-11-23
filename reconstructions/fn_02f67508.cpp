extern "C" void fn_02f67500(void*);
extern "C" unsigned int fn_0307bfa0();
extern "C" unsigned int fn_0307bfdc();

extern "C" void fn_02f67508(void* arg0) {
    unsigned int temp_r3;
    unsigned int temp_r3_2;

    (*(signed char*)((char*)arg0 + 0x2190)) = 0;
    temp_r3 = fn_0307bfa0();
    if (temp_r3 != (unsigned int) (*(unsigned int*)((char*)arg0 + 0x2184))) {
        (*(unsigned int*)((char*)arg0 + 0x2184)) = temp_r3;
        (*(signed char*)((char*)arg0 + 0x2190)) = 1;
    }
    (*(signed char*)((char*)arg0 + 0x2191)) = 0;
    temp_r3_2 = fn_0307bfdc();
    if (temp_r3_2 != (unsigned int) (*(unsigned int*)((char*)arg0 + 0x2188))) {
        (*(unsigned int*)((char*)arg0 + 0x2188)) = temp_r3_2;
        (*(signed char*)((char*)arg0 + 0x2191)) = 1;
    }
    fn_02f67500(arg0);
}
