extern "C" int fn_02e402c0(void*);
extern "C" void fn_030ea2cc(void *);

extern "C" void *data_10467c80;

extern "C" void fn_02199ef0(void *arg0) {
    if (((void *) data_10467c80 != 0) && (fn_02e402c0(data_10467c80) != 0)) {
        fn_030ea2cc(arg0);
    }
}
