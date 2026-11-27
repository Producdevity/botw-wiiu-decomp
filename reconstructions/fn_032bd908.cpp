namespace {
struct Timer {
    char padding_0[0xC];
    int value;
};
}

extern "C" void fn_032bd908(void* arg0, int arg1) {
    Timer* timer = (Timer*)arg0;
    if (arg1 < 0) {
        timer->value = 0;
        return;
    }
    if (arg1 > 0x5B8D7F) {
        arg1 = 0x5B8D7F;
    }
    timer->value = arg1;
}
