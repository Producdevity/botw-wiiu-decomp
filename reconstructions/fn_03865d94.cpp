extern "C" void fn_03711eb0(void *);
extern "C" void fn_039628f0(int, void*, int, int);

extern "C" void fn_03865d94(int context, int* slot, int second, int third) {
    fn_03711eb0((void *)(*slot));
    fn_039628f0(context, slot, second, third);
}
