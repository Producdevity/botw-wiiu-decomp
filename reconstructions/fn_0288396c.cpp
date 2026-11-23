extern "C" void fn_025bac18(void*);
extern "C" int fn_02883894(void*);
extern "C" void fn_02883954(void*);

extern "C" void fn_0288396c(void* arg0) {
    if (((int) (*(unsigned char*)((char*)arg0 + 56)) == 0) && (fn_02883894(arg0) != 0)) {
        fn_02883954(arg0);
        return;
    }
    (*(unsigned char*)((char*)arg0 + 56)) = 1U;
    fn_025bac18(arg0);
}
