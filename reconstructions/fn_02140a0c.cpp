namespace {
struct Actor {
    char padding_0[1079];
    unsigned char flag;
};
}

extern "C" int fn_02140638(void*);
extern "C" int fn_02c19940(void *);
extern "C" int fn_02c1b5c4(void*, int);
extern "C" int fn_02c1b6c0(void*, void*);

extern "C" int fn_02140a0c(void* * object) {
    void* actor = *object;
    if (actor == 0) {
        return 0;
    }
    if (fn_02c19940(actor) != 0 || fn_02c1b6c0(actor, 0) != 0 || fn_02c1b5c4(actor, 0) != 0 || ((Actor *)actor)->flag != 0) {
        return 1;
    }
    return fn_02140638(object);
}
