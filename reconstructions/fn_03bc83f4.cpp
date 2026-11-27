namespace {
struct Range {
    int min;
    int max;
};
}

extern "C" void fn_03bc83f4(void *arg0, int arg1) {
    if (arg1 == 0) {
        ((Range *) arg0)->min = 0;
        ((Range *) arg0)->max = 0x7FFFFFFF;
        return;
    }
    ((Range *) arg0)->min = 0x80000000;
    ((Range *) arg0)->max = -1;
}
