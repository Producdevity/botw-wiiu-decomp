extern "C" void fn_02c2f4b4(void*, void*, int);
extern "C" void fn_02c3630c(int, void*);

extern "C" int data_10463e54;

extern "C" void fn_02c2fd70(void* object) {
    if (data_10463e54 != 0 && data_10463e54 == 0xA) {
        fn_02c3630c(1, (void*)1);
    }
    fn_02c2f4b4(object, 0, 1);
}
