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

extern "C" void fn_02e86904(void* arg0, void* arg1) {
    ((Dest*)arg0)->data.a = ((Block*)arg1)->a;
    ((Dest*)arg0)->data.b = ((Block*)arg1)->b;
    ((Dest*)arg0)->data.c = ((Block*)arg1)->c;
    ((Dest*)arg0)->data.d = ((Block*)arg1)->d;
    ((Dest*)arg0)->data.e = ((Block*)arg1)->e;
    ((Dest*)arg0)->data.f = ((Block*)arg1)->f;
    ((Dest*)arg0)->data.g = ((Block*)arg1)->g;
    ((Dest*)arg0)->data.h = ((Block*)arg1)->h;
    ((Dest*)arg0)->data.flag = ((Block*)arg1)->flag;
    ((Dest*)arg0)->data.tail = ((Block*)arg1)->tail;
}
