extern "C" void fn_0368a1c0(int, int, int);
extern "C" void fn_0368b1ac(int, int, int, int, int);

extern "C" void fn_0368e700(int first, int second, int third, int enabled) {
    if (enabled != 0) {
        fn_0368a1c0(first, second, 0xFF0000);
    }
    fn_0368b1ac(first, second, third, 1, 1);
}
