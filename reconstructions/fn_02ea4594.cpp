extern "C" void fn_02ea457c(void*);
extern "C" void fn_02ea4584(void *);
extern "C" void fn_02ea458c(void *);
extern "C" int fn_0307a268(void*);

extern "C" void fn_02ea4594(void *arg0) {
    fn_02ea457c(arg0);
    if (fn_0307a268(0) != 0) {
        fn_02ea4584(arg0);
        return;
    }
    fn_02ea458c(arg0);
}
