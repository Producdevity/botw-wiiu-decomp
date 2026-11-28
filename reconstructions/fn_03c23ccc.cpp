namespace {
struct Link {
    char padding_0[0x10];
    int field_10;
    char padding_14[4];
    int field_18;
};

struct Source {
    char padding_0[0xC];
    Link* link;
    char padding_10[0x15C];
    int field_16C;
    char padding_170[0x16C];
    int field_2DC;
    char padding_2E0[0x10];
    int field_2F0;
};

struct Dest {
    int a;
    int b;
    int c;
    int d;
    int e;
};
}

extern "C" void fn_03c23ccc(void* source, void* dest) {
    static_cast<Dest*>(dest)->e = static_cast<Source*>(source)->field_2F0;
    static_cast<Dest*>(dest)->a = static_cast<Source*>(source)->field_16C;
    Link* link = static_cast<Source*>(source)->link;
    if (link != 0) {
        static_cast<Dest*>(dest)->b = link->field_18;
        static_cast<Dest*>(dest)->c = link->field_10;
        static_cast<Dest*>(dest)->d = static_cast<Source*>(source)->field_2DC;
        return;
    }
    static_cast<Dest*>(dest)->b = 0;
    static_cast<Dest*>(dest)->d = static_cast<Source*>(source)->field_2DC;
}
