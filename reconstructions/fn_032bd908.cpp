namespace {
struct Timer {
    char padding_0[0xC];
    int value;
};
}

extern "C" void fn_032bd908(void* object, int value) {
    Timer* timer = (Timer*)object;
    if (value < 0) {
        timer->value = 0;
        return;
    }
    if (value > 0x5B8D7F) {
        value = 0x5B8D7F;
    }
    timer->value = value;
}
