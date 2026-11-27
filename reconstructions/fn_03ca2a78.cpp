namespace {
struct Owner {
    char padding_0[0x42C];
    unsigned char a;
    unsigned char b;
    unsigned char c;
};
}

extern "C" void fn_03ca2a78(void* arg0, int arg1, int arg2, int arg3) {
    Owner* owner = (Owner*)arg0;
    if (arg1 != 0) {
        arg1 = owner->a;
    }
    owner->a = arg1;
    if (arg2 != 0) {
        arg2 = owner->b;
    }
    owner->b = arg2;
    if (arg3 != 0) {
        arg3 = owner->c;
    }
    owner->c = arg3;
}
