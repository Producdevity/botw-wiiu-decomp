extern "C" void fn_03c14e84(void*, int);
extern "C" int fn_0421823c(void*, void*, int);

extern "C" void fn_03c14eb4(void* object) {
    int value;

    while (fn_0421823c((char *) object + 584, &value, 0) != 0) {
        fn_03c14e84(object, value);
    }
}
