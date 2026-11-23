extern "C" void fn_03c14e84(void*, int);
extern "C" int fn_0421823c(void*, void*, int);

extern "C" void fn_03c14eb4(void* arg0) {
    int sp8;

    if (fn_0421823c((char*)arg0 + 584, &sp8, 0) != 0) {
        do {
            fn_03c14e84(arg0, sp8);
        } while (fn_0421823c((char*)arg0 + 584, &sp8, 0) != 0);
    }
}
