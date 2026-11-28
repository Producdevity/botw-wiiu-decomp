extern "C" void fn_02ea457c(void*);
extern "C" void fn_02ea4584(void *);
extern "C" void fn_02ea458c(void *);
extern "C" int fn_0307a268(void*);

extern "C" void fn_02ea4594(void *object) {
    fn_02ea457c(object);
    if (fn_0307a268(0) != 0) {
        fn_02ea4584(object);
        return;
    }
    fn_02ea458c(object);
}
