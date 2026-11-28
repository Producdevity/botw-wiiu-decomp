namespace {
struct Object {
    char padding_0[56];
    unsigned char flag;
};
}

extern "C" void fn_025bac18(void*);
extern "C" int fn_02883894(void*);
extern "C" void fn_02883954(void*);

extern "C" void fn_0288396c(void* object) {
    if ((((Object *) object)->flag == 0) && (fn_02883894(object) != 0)) {
        fn_02883954(object);
        return;
    }
    ((Object *) object)->flag = 1U;
    fn_025bac18(object);
}
