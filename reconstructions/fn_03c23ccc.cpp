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

extern "C" void fn_03c23ccc(void* arg0, void* arg1) {
    ((Dest*)arg1)->e = ((Source*)arg0)->field_2F0;
    ((Dest*)arg1)->a = ((Source*)arg0)->field_16C;
    Link* link = ((Source*)arg0)->link;
    if (link != 0) {
        ((Dest*)arg1)->b = link->field_18;
        ((Dest*)arg1)->c = link->field_10;
        ((Dest*)arg1)->d = ((Source*)arg0)->field_2DC;
        return;
    }
    ((Dest*)arg1)->b = 0;
    ((Dest*)arg1)->d = ((Source*)arg0)->field_2DC;
}
