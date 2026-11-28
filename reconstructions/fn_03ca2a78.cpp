namespace {
struct Owner {
    char padding_0[0x42C];
    unsigned char a;
    unsigned char b;
    unsigned char c;
};
}

extern "C" void fn_03ca2a78(void* self, int a, int b, int c) {
    Owner* owner = static_cast<Owner*>(self);
    if (a != 0) {
        a = owner->a;
    }
    owner->a = a;
    if (b != 0) {
        b = owner->b;
    }
    owner->b = b;
    if (c != 0) {
        c = owner->c;
    }
    owner->c = c;
}
