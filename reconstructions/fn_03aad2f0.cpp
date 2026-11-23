extern "C" void fn_03a4d9d8(void*);
extern "C" int fn_03aad2b0(void*);

extern "C" void fn_03aad2f0(void *arg0) {
    if (fn_03aad2b0(arg0) != 0) {
        fn_03a4d9d8((char *)arg0 + 0xA74);
        fn_03a4d9d8((char *)arg0 + 0xA58);
    }
}
