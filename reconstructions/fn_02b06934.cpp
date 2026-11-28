extern "C" int fn_02af9000();
extern "C" void fn_02b057c4(int);
extern "C" void fn_02b05e3c(int);
extern "C" void fn_02b061ec(int);
extern "C" void fn_02b064d0(int);
extern "C" void fn_02b06608(int);
extern "C" void fn_02b067a4(int);
extern "C" void fn_02b068b0(int);

extern "C" void fn_02b06934(int object) {
    if (fn_02af9000() == 0) {
        fn_02b057c4(object);
        fn_02b05e3c(object);
        fn_02b061ec(object);
        fn_02b064d0(object);
        fn_02b06608(object);
        fn_02b067a4(object);
        fn_02b068b0(object);
    }
}
