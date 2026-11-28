namespace {
struct Block {
    int a;
    int b;
    float c;
    float d;
    float e;
    float f;
    float g;
    float h;
    unsigned char flag;
    char padding_21[3];
    int tail;
};

struct Dest {
    char padding_0[0x1C];
    Block data;
};
}

extern "C" void fn_02e86904(void* dest, void* source) {
    ((Dest*)dest)->data.a = ((Block*)source)->a;
    ((Dest*)dest)->data.b = ((Block*)source)->b;
    ((Dest*)dest)->data.c = ((Block*)source)->c;
    ((Dest*)dest)->data.d = ((Block*)source)->d;
    ((Dest*)dest)->data.e = ((Block*)source)->e;
    ((Dest*)dest)->data.f = ((Block*)source)->f;
    ((Dest*)dest)->data.g = ((Block*)source)->g;
    ((Dest*)dest)->data.h = ((Block*)source)->h;
    ((Dest*)dest)->data.flag = ((Block*)source)->flag;
    ((Dest*)dest)->data.tail = ((Block*)source)->tail;
}
